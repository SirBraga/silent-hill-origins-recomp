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

// Function: sub_00242A90
// Address: 0x242a90 - 0x242c58
void sub_00242A90_0x242a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00242A90_0x242a90");
#endif

    switch (ctx->pc) {
        case 0x242abcu: goto label_242abc;
        case 0x242c3cu: goto label_242c3c;
        default: break;
    }

    ctx->pc = 0x242a90u;

    // 0x242a90: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x242a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x242a94: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x242a94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x242a98: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x242a98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242a9c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x242a9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x242aa0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x242aa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x242aa4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x242aa4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242aa8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x242aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x242aac: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x242aacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242ab0: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x242ab0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242ab4: 0xc090932  jal         func_2424C8
    ctx->pc = 0x242AB4u;
    SET_GPR_U32(ctx, 31, 0x242ABCu);
    ctx->pc = 0x242AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242AB4u;
    // 0x242ab8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2424C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2424C8u, 0x242AB4u, 0x242ABCu)) {
        return;
    }
    ctx->pc = 0x242ABCu;
label_242abc:
    // 0x242abc: 0x50400060  beql        $v0, $zero, . + 4 + (0x60 << 2)
    ctx->pc = 0x242ABCu;
    {
        const bool branch_taken_0x242abc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x242abc) {
            ctx->pc = 0x242AC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x242ABCu;
            // 0x242ac0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x242C40u;
            goto label_242c40;
        }
    }
    ctx->pc = 0x242AC4u;
    // 0x242ac4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x242ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x242ac8: 0x3442000e  ori         $v0, $v0, 0xE
    ctx->pc = 0x242ac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)14);
    // 0x242acc: 0x34038002  ori         $v1, $zero, 0x8002
    ctx->pc = 0x242accu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32770);
    // 0x242ad0: 0x31db8  dsll        $v1, $v1, 22
    ctx->pc = 0x242ad0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 22);
    // 0x242ad4: 0x34638080  ori         $v1, $v1, 0x8080
    ctx->pc = 0x242ad4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32896);
    // 0x242ad8: 0x31cf8  dsll        $v1, $v1, 19
    ctx->pc = 0x242ad8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 19);
    // 0x242adc: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x242adcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x242ae0: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x242ae0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x242ae4: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x242ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x242ae8: 0x8c84412c  lw          $a0, 0x412C($a0)
    ctx->pc = 0x242ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x242aec: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x242aecu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x242af0: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x242af0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x242af4: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x242af4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x242af8: 0xac24412c  sw          $a0, 0x412C($at)
    ctx->pc = 0x242af8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x242afc: 0x3403f819  ori         $v1, $zero, 0xF819
    ctx->pc = 0x242afcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63513);
    // 0x242b00: 0x31bfc  dsll32      $v1, $v1, 15
    ctx->pc = 0x242b00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 15));
    // 0x242b04: 0x3402c000  ori         $v0, $zero, 0xC000
    ctx->pc = 0x242b04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49152);
    // 0x242b08: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x242b08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x242b0c: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x242b0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x242b10: 0x214b8  dsll        $v0, $v0, 18
    ctx->pc = 0x242b10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 18);
    // 0x242b14: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x242b14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x242b18: 0x213b8  dsll        $v0, $v0, 14
    ctx->pc = 0x242b18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 14);
    // 0x242b1c: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x242b1cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x242b20: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x242b20u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x242b24: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x242b24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x242b28: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x242b28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x242b2c: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x242b2cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x242b30: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x242b30u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x242b34: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x242b34u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
    // 0x242b38: 0x24830020  addiu       $v1, $a0, 0x20
    ctx->pc = 0x242b38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x242b3c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x242b3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x242b40: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x242b40u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x242b44: 0x7a020010  lq          $v0, 0x10($s0)
    ctx->pc = 0x242b44u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x242b48: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x242b48u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
    // 0x242b4c: 0x24830030  addiu       $v1, $a0, 0x30
    ctx->pc = 0x242b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x242b50: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x242b50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x242b54: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x242b54u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x242b58: 0x7a020020  lq          $v0, 0x20($s0)
    ctx->pc = 0x242b58u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x242b5c: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x242b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
    // 0x242b60: 0x24830040  addiu       $v1, $a0, 0x40
    ctx->pc = 0x242b60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x242b64: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x242b64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x242b68: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x242b68u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x242b6c: 0x7a020030  lq          $v0, 0x30($s0)
    ctx->pc = 0x242b6cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x242b70: 0x7c820040  sq          $v0, 0x40($a0)
    ctx->pc = 0x242b70u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), GPR_VEC(ctx, 2));
    // 0x242b74: 0x24830050  addiu       $v1, $a0, 0x50
    ctx->pc = 0x242b74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    // 0x242b78: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x242b78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x242b7c: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x242b7cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x242b80: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x242b80u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x242b84: 0x7c820050  sq          $v0, 0x50($a0)
    ctx->pc = 0x242b84u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 80), GPR_VEC(ctx, 2));
    // 0x242b88: 0x24830060  addiu       $v1, $a0, 0x60
    ctx->pc = 0x242b88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x242b8c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x242b8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x242b90: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x242b90u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x242b94: 0x7a220010  lq          $v0, 0x10($s1)
    ctx->pc = 0x242b94u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x242b98: 0x7c820060  sq          $v0, 0x60($a0)
    ctx->pc = 0x242b98u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 96), GPR_VEC(ctx, 2));
    // 0x242b9c: 0x24830070  addiu       $v1, $a0, 0x70
    ctx->pc = 0x242b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
    // 0x242ba0: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x242ba0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x242ba4: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x242ba4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x242ba8: 0x7a220020  lq          $v0, 0x20($s1)
    ctx->pc = 0x242ba8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x242bac: 0x7c820070  sq          $v0, 0x70($a0)
    ctx->pc = 0x242bacu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 112), GPR_VEC(ctx, 2));
    // 0x242bb0: 0x24830080  addiu       $v1, $a0, 0x80
    ctx->pc = 0x242bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
    // 0x242bb4: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x242bb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x242bb8: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x242bb8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x242bbc: 0x7a220030  lq          $v0, 0x30($s1)
    ctx->pc = 0x242bbcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x242bc0: 0x7c820080  sq          $v0, 0x80($a0)
    ctx->pc = 0x242bc0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 128), GPR_VEC(ctx, 2));
    // 0x242bc4: 0x24830090  addiu       $v1, $a0, 0x90
    ctx->pc = 0x242bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 144));
    // 0x242bc8: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x242bc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x242bcc: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x242bccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x242bd0: 0x7a420000  lq          $v0, 0x0($s2)
    ctx->pc = 0x242bd0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x242bd4: 0x7c820090  sq          $v0, 0x90($a0)
    ctx->pc = 0x242bd4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 144), GPR_VEC(ctx, 2));
    // 0x242bd8: 0x248300a0  addiu       $v1, $a0, 0xA0
    ctx->pc = 0x242bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
    // 0x242bdc: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x242bdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x242be0: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x242be0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x242be4: 0x7a420010  lq          $v0, 0x10($s2)
    ctx->pc = 0x242be4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x242be8: 0x7c8200a0  sq          $v0, 0xA0($a0)
    ctx->pc = 0x242be8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 160), GPR_VEC(ctx, 2));
    // 0x242bec: 0x248300b0  addiu       $v1, $a0, 0xB0
    ctx->pc = 0x242becu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 176));
    // 0x242bf0: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x242bf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x242bf4: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x242bf4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x242bf8: 0x7a420020  lq          $v0, 0x20($s2)
    ctx->pc = 0x242bf8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x242bfc: 0x7c8200b0  sq          $v0, 0xB0($a0)
    ctx->pc = 0x242bfcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 176), GPR_VEC(ctx, 2));
    // 0x242c00: 0x248300c0  addiu       $v1, $a0, 0xC0
    ctx->pc = 0x242c00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    // 0x242c04: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x242c04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x242c08: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x242c08u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x242c0c: 0x7a420030  lq          $v0, 0x30($s2)
    ctx->pc = 0x242c0cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x242c10: 0x7c8200c0  sq          $v0, 0xC0($a0)
    ctx->pc = 0x242c10u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 192), GPR_VEC(ctx, 2));
    // 0x242c14: 0x248300d0  addiu       $v1, $a0, 0xD0
    ctx->pc = 0x242c14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 208));
    // 0x242c18: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x242c18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x242c1c: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x242c1cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x242c20: 0x3c05005c  lui         $a1, 0x5C
    ctx->pc = 0x242c20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)92 << 16));
    // 0x242c24: 0x24a50fe0  addiu       $a1, $a1, 0xFE0
    ctx->pc = 0x242c24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4064));
    // 0x242c28: 0x248300e0  addiu       $v1, $a0, 0xE0
    ctx->pc = 0x242c28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 224));
    // 0x242c2c: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x242c2cu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x5C0FE0u));
    // 0x242c30: 0x7c8200d0  sq          $v0, 0xD0($a0)
    ctx->pc = 0x242c30u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 208), GPR_VEC(ctx, 2));
    // 0x242c34: 0xc0908e0  jal         func_242380
    ctx->pc = 0x242C34u;
    SET_GPR_U32(ctx, 31, 0x242C3Cu);
    ctx->pc = 0x242C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242C34u;
    // 0x242c38: 0xaf8390bc  sw          $v1, -0x6F44($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938812), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x242380u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x242380u, 0x242C34u, 0x242C3Cu)) {
        return;
    }
    ctx->pc = 0x242C3Cu;
label_242c3c:
    // 0x242c3c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x242c3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_242c40:
    // 0x242c40: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x242c40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x242c44: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x242c44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x242c48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x242c48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x242c4c: 0x3e00008  jr          $ra
    ctx->pc = 0x242C4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x242C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242C4Cu;
        // 0x242c50: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x242C4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x242C54u;
    // 0x242c54: 0x0  nop
    ctx->pc = 0x242c54u;
    // NOP
    ctx->pc = 0x242c58u;
}
