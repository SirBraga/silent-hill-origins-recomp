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

// Function: sub_0023B9D0
// Address: 0x23b9d0 - 0x23bb70
void sub_0023B9D0_0x23b9d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023B9D0_0x23b9d0");
#endif

    switch (ctx->pc) {
        case 0x23ba2cu: goto label_23ba2c;
        default: break;
    }

    ctx->pc = 0x23b9d0u;

    // 0x23b9d0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x23b9d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x23b9d4: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x23b9d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x23b9d8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x23b9d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x23b9dc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x23b9dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b9e0: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x23b9e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x23b9e4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x23b9e4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b9e8: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x23b9e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x23b9ec: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x23b9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x23b9f0: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x23b9f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x23b9f4: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x23b9f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b9f8: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x23b9f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x23b9fc: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x23b9fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ba00: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x23ba00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x23ba04: 0x160a82d  daddu       $s5, $t3, $zero
    ctx->pc = 0x23ba04u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ba08: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x23ba08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x23ba0c: 0x140b02d  daddu       $s6, $t2, $zero
    ctx->pc = 0x23ba0cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ba10: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x23ba10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x23ba14: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x23ba14u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ba18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23ba18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23ba1c: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x23ba1cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ba20: 0x8fb000a0  lw          $s0, 0xA0($sp)
    ctx->pc = 0x23ba20u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x23ba24: 0xc08bbd6  jal         func_22EF58
    ctx->pc = 0x23BA24u;
    SET_GPR_U32(ctx, 31, 0x23BA2Cu);
    ctx->pc = 0x23BA28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BA24u;
    // 0x23ba28: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EF58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22EF58u, 0x23BA24u, 0x23BA2Cu)) {
        return;
    }
    ctx->pc = 0x23BA2Cu;
label_23ba2c:
    // 0x23ba2c: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x23ba2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x23ba30: 0x4237c  dsll32      $a0, $a0, 13
    ctx->pc = 0x23ba30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 13));
    // 0x23ba34: 0x34848006  ori         $a0, $a0, 0x8006
    ctx->pc = 0x23ba34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32774);
    // 0x23ba38: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x23ba38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x23ba3c: 0x70642389  pcpyld      $a0, $v1, $a0
    ctx->pc = 0x23ba3cu;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x23ba40: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x23ba40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x23ba44: 0x8c42412c  lw          $v0, 0x412C($v0)
    ctx->pc = 0x23ba44u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x23ba48: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x23ba48u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
    // 0x23ba4c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x23ba4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x23ba50: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x23BA50u;
    {
        const bool branch_taken_0x23ba50 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BA50u;
        // 0x23ba54: 0xaf8290bc  sw          $v0, -0x6F44($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938812), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ba50) {
            ctx->pc = 0x23BA70u;
            goto label_23ba70;
        }
    }
    ctx->pc = 0x23BA58u;
    // 0x23ba58: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x23ba58u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ba5c: 0x24020156  addiu       $v0, $zero, 0x156
    ctx->pc = 0x23ba5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 342));
    // 0x23ba60: 0x70622389  pcpyld      $a0, $v1, $v0
    ctx->pc = 0x23ba60u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x23ba64: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x23BA64u;
    {
        const bool branch_taken_0x23ba64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BA64u;
        // 0x23ba68: 0x8f8390bc  lw          $v1, -0x6F44($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938812)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ba64) {
            ctx->pc = 0x23BA88u;
            goto label_23ba88;
        }
    }
    ctx->pc = 0x23BA6Cu;
    // 0x23ba6c: 0x0  nop
    ctx->pc = 0x23ba6cu;
    // NOP
label_23ba70:
    // 0x23ba70: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x23ba70u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ba74: 0x24020116  addiu       $v0, $zero, 0x116
    ctx->pc = 0x23ba74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 278));
    // 0x23ba78: 0x70622389  pcpyld      $a0, $v1, $v0
    ctx->pc = 0x23ba78u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x23ba7c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x23ba7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x23ba80: 0x8c63412c  lw          $v1, 0x412C($v1)
    ctx->pc = 0x23ba80u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x23ba84: 0x0  nop
    ctx->pc = 0x23ba84u;
    // NOP
label_23ba88:
    // 0x23ba88: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x23ba88u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x23ba8c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x23ba8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x23ba90: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x23ba90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x23ba94: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x23ba94u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x23ba98: 0x111400  sll         $v0, $s1, 16
    ctx->pc = 0x23ba98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 16));
    // 0x23ba9c: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x23ba9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x23baa0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x23baa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x23baa4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x23baa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23baa8: 0x70a42389  pcpyld      $a0, $a1, $a0
    ctx->pc = 0x23baa8u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x23baac: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x23baacu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x23bab0: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x23bab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x23bab4: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x23bab4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x23bab8: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x23bab8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x23babc: 0x132500  sll         $a0, $s3, 20
    ctx->pc = 0x23babcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 20));
    // 0x23bac0: 0x141100  sll         $v0, $s4, 4
    ctx->pc = 0x23bac0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x23bac4: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x23bac4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x23bac8: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x23bac8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x23bacc: 0x70c42389  pcpyld      $a0, $a2, $a0
    ctx->pc = 0x23baccu;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 4)));
    // 0x23bad0: 0x7c640010  sq          $a0, 0x10($v1)
    ctx->pc = 0x23bad0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 4));
    // 0x23bad4: 0x24620020  addiu       $v0, $v1, 0x20
    ctx->pc = 0x23bad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x23bad8: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x23bad8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x23badc: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x23badcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x23bae0: 0x340480ff  ori         $a0, $zero, 0x80FF
    ctx->pc = 0x23bae0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33023);
    // 0x23bae4: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x23bae4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x23bae8: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x23bae8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x23baec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23baecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23baf0: 0x70442389  pcpyld      $a0, $v0, $a0
    ctx->pc = 0x23baf0u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x23baf4: 0x7c640020  sq          $a0, 0x20($v1)
    ctx->pc = 0x23baf4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), GPR_VEC(ctx, 4));
    // 0x23baf8: 0x24620030  addiu       $v0, $v1, 0x30
    ctx->pc = 0x23baf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x23bafc: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x23bafcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x23bb00: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x23bb00u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x23bb04: 0x152400  sll         $a0, $s5, 16
    ctx->pc = 0x23bb04u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 21), 16));
    // 0x23bb08: 0x962025  or          $a0, $a0, $s6
    ctx->pc = 0x23bb08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 22));
    // 0x23bb0c: 0x70a42389  pcpyld      $a0, $a1, $a0
    ctx->pc = 0x23bb0cu;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x23bb10: 0x7c640030  sq          $a0, 0x30($v1)
    ctx->pc = 0x23bb10u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), GPR_VEC(ctx, 4));
    // 0x23bb14: 0x24620040  addiu       $v0, $v1, 0x40
    ctx->pc = 0x23bb14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x23bb18: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x23bb18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x23bb1c: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x23bb1cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x23bb20: 0x172500  sll         $a0, $s7, 20
    ctx->pc = 0x23bb20u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 23), 20));
    // 0x23bb24: 0x1e1100  sll         $v0, $fp, 4
    ctx->pc = 0x23bb24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 4));
    // 0x23bb28: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x23bb28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x23bb2c: 0x70c42389  pcpyld      $a0, $a2, $a0
    ctx->pc = 0x23bb2cu;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 4)));
    // 0x23bb30: 0x7c640040  sq          $a0, 0x40($v1)
    ctx->pc = 0x23bb30u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 64), GPR_VEC(ctx, 4));
    // 0x23bb34: 0x24630050  addiu       $v1, $v1, 0x50
    ctx->pc = 0x23bb34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x23bb38: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x23bb38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x23bb3c: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x23bb3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x23bb40: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x23bb40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x23bb44: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x23bb44u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x23bb48: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x23bb48u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x23bb4c: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x23bb4cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23bb50: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x23bb50u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23bb54: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x23bb54u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23bb58: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x23bb58u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23bb5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23bb5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23bb60: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x23bb60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x23bb64: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x23bb64u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x23bb68: 0x3e00008  jr          $ra
    ctx->pc = 0x23BB68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23BB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BB68u;
        // 0x23bb6c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23BB68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23BB70u;
}
