#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0023BB70
// Address: 0x23bb70 - 0x23bd00
void sub_0023BB70_0x23bb70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023BB70_0x23bb70");
#endif

    switch (ctx->pc) {
        case 0x23bb84u: goto label_23bb84;
        case 0x23bc60u: goto label_23bc60;
        default: break;
    }

    ctx->pc = 0x23bb70u;

    // 0x23bb70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23bb70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23bb74: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x23bb74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x23bb78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23bb78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23bb7c: 0xc08bbd6  jal         func_22EF58
    ctx->pc = 0x23BB7Cu;
    SET_GPR_U32(ctx, 31, 0x23BB84u);
    ctx->pc = 0x23BB80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BB7Cu;
    // 0x23bb80: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EF58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22EF58u, 0x23BB7Cu, 0x23BB84u)) {
        return;
    }
    ctx->pc = 0x23BB84u;
label_23bb84:
    // 0x23bb84: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0x23bb84u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x23bb88: 0x6337c  dsll32      $a2, $a2, 13
    ctx->pc = 0x23bb88u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 13));
    // 0x23bb8c: 0x34c68005  ori         $a2, $a2, 0x8005
    ctx->pc = 0x23bb8cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32773);
    // 0x23bb90: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x23bb90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x23bb94: 0x70461389  pcpyld      $v0, $v0, $a2
    ctx->pc = 0x23bb94u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
    // 0x23bb98: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x23bb98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x23bb9c: 0x8c63412c  lw          $v1, 0x412C($v1)
    ctx->pc = 0x23bb9cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x23bba0: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x23bba0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x23bba4: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x23bba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x23bba8: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x23bba8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x23bbac: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x23bbacu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x23bbb0: 0x3c06006b  lui         $a2, 0x6B
    ctx->pc = 0x23bbb0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)107 << 16));
    // 0x23bbb4: 0xdcc634c8  ld          $a2, 0x34C8($a2)
    ctx->pc = 0x23bbb4u;
    SET_GPR_U64(ctx, 6, FAST_READ64(0x6B34C8u));
    // 0x23bbb8: 0x2402004c  addiu       $v0, $zero, 0x4C
    ctx->pc = 0x23bbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x23bbbc: 0x70461389  pcpyld      $v0, $v0, $a2
    ctx->pc = 0x23bbbcu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
    // 0x23bbc0: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x23bbc0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x23bbc4: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x23bbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x23bbc8: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x23bbc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x23bbcc: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x23bbccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x23bbd0: 0x3c06006b  lui         $a2, 0x6B
    ctx->pc = 0x23bbd0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)107 << 16));
    // 0x23bbd4: 0xdcc634c0  ld          $a2, 0x34C0($a2)
    ctx->pc = 0x23bbd4u;
    SET_GPR_U64(ctx, 6, FAST_READ64(0x6B34C0u));
    // 0x23bbd8: 0x2402004e  addiu       $v0, $zero, 0x4E
    ctx->pc = 0x23bbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x23bbdc: 0x70461389  pcpyld      $v0, $v0, $a2
    ctx->pc = 0x23bbdcu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
    // 0x23bbe0: 0x7c620010  sq          $v0, 0x10($v1)
    ctx->pc = 0x23bbe0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 2));
    // 0x23bbe4: 0x24620020  addiu       $v0, $v1, 0x20
    ctx->pc = 0x23bbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x23bbe8: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x23bbe8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x23bbec: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x23bbecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x23bbf0: 0x24040042  addiu       $a0, $zero, 0x42
    ctx->pc = 0x23bbf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x23bbf4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x23bbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x23bbf8: 0xdc423500  ld          $v0, 0x3500($v0)
    ctx->pc = 0x23bbf8u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x6B3500u));
    // 0x23bbfc: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x23bbfcu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x23bc00: 0x7c620020  sq          $v0, 0x20($v1)
    ctx->pc = 0x23bc00u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), GPR_VEC(ctx, 2));
    // 0x23bc04: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x23bc04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x23bc08: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x23bc08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x23bc0c: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x23bc0cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x23bc10: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x23bc10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x23bc14: 0xdc8434f8  ld          $a0, 0x34F8($a0)
    ctx->pc = 0x23bc14u;
    SET_GPR_U64(ctx, 4, FAST_READ64(0x6B34F8u));
    // 0x23bc18: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x23bc18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x23bc1c: 0xdc633f48  ld          $v1, 0x3F48($v1)
    ctx->pc = 0x23bc1cu;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x6B3F48u));
    // 0x23bc20: 0x2402fe1f  addiu       $v0, $zero, -0x1E1
    ctx->pc = 0x23bc20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966815));
    // 0x23bc24: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x23bc24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x23bc28: 0x3c06006b  lui         $a2, 0x6B
    ctx->pc = 0x23bc28u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)107 << 16));
    // 0x23bc2c: 0xdcc634d8  ld          $a2, 0x34D8($a2)
    ctx->pc = 0x23bc2cu;
    SET_GPR_U64(ctx, 6, FAST_READ64(0x6B34D8u));
    // 0x23bc30: 0x306301e0  andi        $v1, $v1, 0x1E0
    ctx->pc = 0x23bc30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)480);
    // 0x23bc34: 0x3c02bfff  lui         $v0, 0xBFFF
    ctx->pc = 0x23bc34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49151 << 16));
    // 0x23bc38: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x23bc38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x23bc3c: 0x21178  dsll        $v0, $v0, 5
    ctx->pc = 0x23bc3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 5);
    // 0x23bc40: 0x3442001f  ori         $v0, $v0, 0x1F
    ctx->pc = 0x23bc40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)31);
    // 0x23bc44: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x23bc44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x23bc48: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x23bc48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x23bc4c: 0x90a54131  lbu         $a1, 0x4131($a1)
    ctx->pc = 0x23bc4cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)FAST_READ8(0x6B4131u));
    // 0x23bc50: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x23bc50u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x23bc54: 0x10a00016  beqz        $a1, . + 4 + (0x16 << 2)
    ctx->pc = 0x23BC54u;
    {
        const bool branch_taken_0x23bc54 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BC54u;
        // 0x23bc58: 0xff848488  sd          $a0, -0x7B78($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 4294935688), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bc54) {
            ctx->pc = 0x23BCB0u;
            goto label_23bcb0;
        }
    }
    ctx->pc = 0x23BC5Cu;
    // 0x23bc5c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x23bc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_23bc60:
    // 0x23bc60: 0x42000039  di
    ctx->pc = 0x23bc60u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x23bc64: 0x40f  sync.p
    ctx->pc = 0x23bc64u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x23bc68: 0x40036000  mfc0        $v1, Status
    ctx->pc = 0x23bc68u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_status);
    // 0x23bc6c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x23bc6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x23bc70: 0x0  nop
    ctx->pc = 0x23bc70u;
    // NOP
    // 0x23bc74: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x23BC74u;
    {
        const bool branch_taken_0x23bc74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x23bc74) {
            ctx->pc = 0x23BC60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23bc60;
        }
    }
    ctx->pc = 0x23BC7Cu;
    // 0x23bc7c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x23bc7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x23bc80: 0x9063415d  lbu         $v1, 0x415D($v1)
    ctx->pc = 0x23bc80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x6B415Du));
    // 0x23bc84: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x23bc84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x23bc88: 0x90424132  lbu         $v0, 0x4132($v0)
    ctx->pc = 0x23bc88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x6B4132u));
    // 0x23bc8c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x23bc8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x23bc90: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x23bc90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x23bc94: 0x9084415c  lbu         $a0, 0x415C($a0)
    ctx->pc = 0x23bc94u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x6B415Cu));
    // 0x23bc98: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x23bc98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x23bc9c: 0x441026  xor         $v0, $v0, $a0
    ctx->pc = 0x23bc9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 4));
    // 0x23bca0: 0x42000038  ei
    ctx->pc = 0x23bca0u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x23bca4: 0x210fc  dsll32      $v0, $v0, 3
    ctx->pc = 0x23bca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 3));
    // 0x23bca8: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x23bca8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x23bcac: 0x0  nop
    ctx->pc = 0x23bcacu;
    // NOP
label_23bcb0:
    // 0x23bcb0: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x23bcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x23bcb4: 0x70461389  pcpyld      $v0, $v0, $a2
    ctx->pc = 0x23bcb4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
    // 0x23bcb8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x23bcb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x23bcbc: 0x8c63412c  lw          $v1, 0x412C($v1)
    ctx->pc = 0x23bcbcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x23bcc0: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x23bcc0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x23bcc4: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x23bcc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x23bcc8: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x23bcc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x23bccc: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x23bcccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x23bcd0: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x23bcd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x23bcd4: 0x70461389  pcpyld      $v0, $v0, $a2
    ctx->pc = 0x23bcd4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
    // 0x23bcd8: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x23bcd8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x23bcdc: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x23bcdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x23bce0: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x23bce0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x23bce4: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x23bce4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x23bce8: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x23bce8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x23bcec: 0xac204138  sw          $zero, 0x4138($at)
    ctx->pc = 0x23bcecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6B4138u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B4138u, _value); } while (0);
    // 0x23bcf0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23bcf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23bcf4: 0x3e00008  jr          $ra
    ctx->pc = 0x23BCF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23BCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BCF4u;
        // 0x23bcf8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23BCF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23BCFCu;
    // 0x23bcfc: 0x0  nop
    ctx->pc = 0x23bcfcu;
    // NOP
    ctx->pc = 0x23bd00u;
}
