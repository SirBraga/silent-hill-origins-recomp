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

// Function: sub_00272ED8
// Address: 0x272ed8 - 0x273060
void sub_00272ED8_0x272ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00272ED8_0x272ed8");
#endif

    switch (ctx->pc) {
        case 0x272ed8u: goto label_272ed8;
        case 0x272edcu: goto label_272edc;
        case 0x272ee0u: goto label_272ee0;
        case 0x272ee4u: goto label_272ee4;
        case 0x272ee8u: goto label_272ee8;
        case 0x272eecu: goto label_272eec;
        case 0x272ef0u: goto label_272ef0;
        case 0x272ef4u: goto label_272ef4;
        case 0x272ef8u: goto label_272ef8;
        case 0x272efcu: goto label_272efc;
        case 0x272f00u: goto label_272f00;
        case 0x272f04u: goto label_272f04;
        case 0x272f08u: goto label_272f08;
        case 0x272f0cu: goto label_272f0c;
        case 0x272f10u: goto label_272f10;
        case 0x272f14u: goto label_272f14;
        case 0x272f18u: goto label_272f18;
        case 0x272f1cu: goto label_272f1c;
        case 0x272f20u: goto label_272f20;
        case 0x272f24u: goto label_272f24;
        case 0x272f28u: goto label_272f28;
        case 0x272f2cu: goto label_272f2c;
        case 0x272f30u: goto label_272f30;
        case 0x272f34u: goto label_272f34;
        case 0x272f38u: goto label_272f38;
        case 0x272f3cu: goto label_272f3c;
        case 0x272f40u: goto label_272f40;
        case 0x272f44u: goto label_272f44;
        case 0x272f48u: goto label_272f48;
        case 0x272f4cu: goto label_272f4c;
        case 0x272f50u: goto label_272f50;
        case 0x272f54u: goto label_272f54;
        case 0x272f58u: goto label_272f58;
        case 0x272f5cu: goto label_272f5c;
        case 0x272f60u: goto label_272f60;
        case 0x272f64u: goto label_272f64;
        case 0x272f68u: goto label_272f68;
        case 0x272f6cu: goto label_272f6c;
        case 0x272f70u: goto label_272f70;
        case 0x272f74u: goto label_272f74;
        case 0x272f78u: goto label_272f78;
        case 0x272f7cu: goto label_272f7c;
        case 0x272f80u: goto label_272f80;
        case 0x272f84u: goto label_272f84;
        case 0x272f88u: goto label_272f88;
        case 0x272f8cu: goto label_272f8c;
        case 0x272f90u: goto label_272f90;
        case 0x272f94u: goto label_272f94;
        case 0x272f98u: goto label_272f98;
        case 0x272f9cu: goto label_272f9c;
        case 0x272fa0u: goto label_272fa0;
        case 0x272fa4u: goto label_272fa4;
        case 0x272fa8u: goto label_272fa8;
        case 0x272facu: goto label_272fac;
        case 0x272fb0u: goto label_272fb0;
        case 0x272fb4u: goto label_272fb4;
        case 0x272fb8u: goto label_272fb8;
        case 0x272fbcu: goto label_272fbc;
        case 0x272fc0u: goto label_272fc0;
        case 0x272fc4u: goto label_272fc4;
        case 0x272fc8u: goto label_272fc8;
        case 0x272fccu: goto label_272fcc;
        case 0x272fd0u: goto label_272fd0;
        case 0x272fd4u: goto label_272fd4;
        case 0x272fd8u: goto label_272fd8;
        case 0x272fdcu: goto label_272fdc;
        case 0x272fe0u: goto label_272fe0;
        case 0x272fe4u: goto label_272fe4;
        case 0x272fe8u: goto label_272fe8;
        case 0x272fecu: goto label_272fec;
        case 0x272ff0u: goto label_272ff0;
        case 0x272ff4u: goto label_272ff4;
        case 0x272ff8u: goto label_272ff8;
        case 0x272ffcu: goto label_272ffc;
        case 0x273000u: goto label_273000;
        case 0x273004u: goto label_273004;
        case 0x273008u: goto label_273008;
        case 0x27300cu: goto label_27300c;
        case 0x273010u: goto label_273010;
        case 0x273014u: goto label_273014;
        case 0x273018u: goto label_273018;
        case 0x27301cu: goto label_27301c;
        case 0x273020u: goto label_273020;
        case 0x273024u: goto label_273024;
        case 0x273028u: goto label_273028;
        case 0x27302cu: goto label_27302c;
        case 0x273030u: goto label_273030;
        case 0x273034u: goto label_273034;
        case 0x273038u: goto label_273038;
        case 0x27303cu: goto label_27303c;
        case 0x273040u: goto label_273040;
        case 0x273044u: goto label_273044;
        case 0x273048u: goto label_273048;
        case 0x27304cu: goto label_27304c;
        case 0x273050u: goto label_273050;
        case 0x273054u: goto label_273054;
        case 0x273058u: goto label_273058;
        case 0x27305cu: goto label_27305c;
        default: break;
    }

    ctx->pc = 0x272ed8u;

label_272ed8:
    // 0x272ed8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x272ed8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_272edc:
    // 0x272edc: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x272edcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_272ee0:
    // 0x272ee0: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x272ee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
label_272ee4:
    // 0x272ee4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x272ee4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_272ee8:
    // 0x272ee8: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x272ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
label_272eec:
    // 0x272eec: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x272eecu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_272ef0:
    // 0x272ef0: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x272ef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_272ef4:
    // 0x272ef4: 0xe0f02d  daddu       $fp, $a3, $zero
    ctx->pc = 0x272ef4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_272ef8:
    // 0x272ef8: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x272ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_272efc:
    // 0x272efc: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x272efcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_272f00:
    // 0x272f00: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x272f00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_272f04:
    // 0x272f04: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x272f04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_272f08:
    // 0x272f08: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x272f08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_272f0c:
    // 0x272f0c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x272f0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_272f10:
    // 0x272f10: 0xc09cc18  jal         func_273060
label_272f14:
    if (ctx->pc == 0x272F14u) {
        ctx->pc = 0x272F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272F10u;
        // 0x272f14: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272F18u;
        goto label_272f18;
    }
    ctx->pc = 0x272F10u;
    SET_GPR_U32(ctx, 31, 0x272F18u);
    ctx->pc = 0x272F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272F10u;
    // 0x272f14: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x273060u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x273060u, 0x272F10u, 0x272F18u)) {
        return;
    }
    ctx->pc = 0x272F18u;
label_272f18:
    // 0x272f18: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x272f18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_272f1c:
    // 0x272f1c: 0x12200043  beqz        $s1, . + 4 + (0x43 << 2)
label_272f20:
    if (ctx->pc == 0x272F20u) {
        ctx->pc = 0x272F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272F1Cu;
        // 0x272f20: 0x8f848f80  lw          $a0, -0x7080($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938496)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272F24u;
        goto label_272f24;
    }
    ctx->pc = 0x272F1Cu;
    {
        const bool branch_taken_0x272f1c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x272F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272F1Cu;
        // 0x272f20: 0x8f848f80  lw          $a0, -0x7080($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938496)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272f1c) {
            ctx->pc = 0x27302Cu;
            goto label_27302c;
        }
    }
    ctx->pc = 0x272F24u;
label_272f24:
    // 0x272f24: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x272f24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_272f28:
    // 0x272f28: 0x260b02d  daddu       $s6, $s3, $zero
    ctx->pc = 0x272f28u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_272f2c:
    // 0x272f2c: 0xc0c84d8  jal         func_321360
label_272f30:
    if (ctx->pc == 0x272F30u) {
        ctx->pc = 0x272F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272F2Cu;
        // 0x272f30: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272F34u;
        goto label_272f34;
    }
    ctx->pc = 0x272F2Cu;
    SET_GPR_U32(ctx, 31, 0x272F34u);
    ctx->pc = 0x272F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272F2Cu;
    // 0x272f30: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321360u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321360u, 0x272F2Cu, 0x272F34u)) {
        return;
    }
    ctx->pc = 0x272F34u;
label_272f34:
    // 0x272f34: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x272f34u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_272f38:
    // 0x272f38: 0x24150005  addiu       $s5, $zero, 0x5
    ctx->pc = 0x272f38u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_272f3c:
    // 0x272f3c: 0x0  nop
    ctx->pc = 0x272f3cu;
    // NOP
label_272f40:
    // 0x272f40: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x272f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_272f44:
    // 0x272f44: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x272f44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_272f48:
    // 0x272f48: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_272f4c:
    if (ctx->pc == 0x272F4Cu) {
        ctx->pc = 0x272F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272F48u;
        // 0x272f4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272F50u;
        goto label_272f50;
    }
    ctx->pc = 0x272F48u;
    {
        const bool branch_taken_0x272f48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x272F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272F48u;
        // 0x272f4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272f48) {
            ctx->pc = 0x272F74u;
            goto label_272f74;
        }
    }
    ctx->pc = 0x272F50u;
label_272f50:
    // 0x272f50: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x272f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_272f54:
    // 0x272f54: 0x40f809  jalr        $v0
label_272f58:
    if (ctx->pc == 0x272F58u) {
        ctx->pc = 0x272F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272F54u;
        // 0x272f58: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272F5Cu;
        goto label_272f5c;
    }
    ctx->pc = 0x272F54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x272F5Cu);
        ctx->pc = 0x272F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272F54u;
        // 0x272f58: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x272F54u, 0x272F5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x272F5Cu;
label_272f5c:
    // 0x272f5c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x272f5cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_272f60:
    // 0x272f60: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x272f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
label_272f64:
    // 0x272f64: 0x5454fff6  bnel        $v0, $s4, . + 4 + (-0xA << 2)
label_272f68:
    if (ctx->pc == 0x272F68u) {
        ctx->pc = 0x272F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272F64u;
        // 0x272f68: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272F6Cu;
        goto label_272f6c;
    }
    ctx->pc = 0x272F64u;
    {
        const bool branch_taken_0x272f64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x272f64) {
            ctx->pc = 0x272F68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x272F64u;
            // 0x272f68: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x272F40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_272f40;
        }
    }
    ctx->pc = 0x272F6Cu;
label_272f6c:
    // 0x272f6c: 0xac750038  sw          $s5, 0x38($v1)
    ctx->pc = 0x272f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 21));
label_272f70:
    // 0x272f70: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x272f70u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_272f74:
    // 0x272f74: 0xc0c84d0  jal         func_321340
label_272f78:
    if (ctx->pc == 0x272F78u) {
        ctx->pc = 0x272F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272F74u;
        // 0x272f78: 0x8f848f80  lw          $a0, -0x7080($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938496)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272F7Cu;
        goto label_272f7c;
    }
    ctx->pc = 0x272F74u;
    SET_GPR_U32(ctx, 31, 0x272F7Cu);
    ctx->pc = 0x272F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272F74u;
    // 0x272f78: 0x8f848f80  lw          $a0, -0x7080($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938496)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321340u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321340u, 0x272F74u, 0x272F7Cu)) {
        return;
    }
    ctx->pc = 0x272F7Cu;
label_272f7c:
    // 0x272f7c: 0x1640000c  bnez        $s2, . + 4 + (0xC << 2)
label_272f80:
    if (ctx->pc == 0x272F80u) {
        ctx->pc = 0x272F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272F7Cu;
        // 0x272f80: 0x32620010  andi        $v0, $s3, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        ctx->pc = 0x272F84u;
        goto label_272f84;
    }
    ctx->pc = 0x272F7Cu;
    {
        const bool branch_taken_0x272f7c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x272F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272F7Cu;
        // 0x272f80: 0x32620010  andi        $v0, $s3, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x272f7c) {
            ctx->pc = 0x272FB0u;
            goto label_272fb0;
        }
    }
    ctx->pc = 0x272F84u;
label_272f84:
    // 0x272f84: 0xc09cea0  jal         func_273A80
label_272f88:
    if (ctx->pc == 0x272F88u) {
        ctx->pc = 0x272F8Cu;
        goto label_272f8c;
    }
    ctx->pc = 0x272F84u;
    SET_GPR_U32(ctx, 31, 0x272F8Cu);
    ctx->pc = 0x273A80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x273A80u, 0x272F84u, 0x272F8Cu)) {
        return;
    }
    ctx->pc = 0x272F8Cu;
label_272f8c:
    // 0x272f8c: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x272f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
label_272f90:
    // 0x272f90: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x272f90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_272f94:
    // 0x272f94: 0x8c6353dc  lw          $v1, 0x53DC($v1)
    ctx->pc = 0x272f94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 21468)));
label_272f98:
    // 0x272f98: 0x10600024  beqz        $v1, . + 4 + (0x24 << 2)
label_272f9c:
    if (ctx->pc == 0x272F9Cu) {
        ctx->pc = 0x272F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272F98u;
        // 0x272f9c: 0xac440010  sw          $a0, 0x10($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272FA0u;
        goto label_272fa0;
    }
    ctx->pc = 0x272F98u;
    {
        const bool branch_taken_0x272f98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x272F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272F98u;
        // 0x272f9c: 0xac440010  sw          $a0, 0x10($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272f98) {
            ctx->pc = 0x27302Cu;
            goto label_27302c;
        }
    }
    ctx->pc = 0x272FA0u;
label_272fa0:
    // 0x272fa0: 0x60f809  jalr        $v1
label_272fa4:
    if (ctx->pc == 0x272FA4u) {
        ctx->pc = 0x272FA8u;
        goto label_272fa8;
    }
    ctx->pc = 0x272FA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x272FA8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x272FA0u, 0x272FA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x272FA8u;
label_272fa8:
    // 0x272fa8: 0x10000021  b           . + 4 + (0x21 << 2)
label_272fac:
    if (ctx->pc == 0x272FACu) {
        ctx->pc = 0x272FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272FA8u;
        // 0x272fac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272FB0u;
        goto label_272fb0;
    }
    ctx->pc = 0x272FA8u;
    {
        const bool branch_taken_0x272fa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272FA8u;
        // 0x272fac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272fa8) {
            ctx->pc = 0x273030u;
            goto label_273030;
        }
    }
    ctx->pc = 0x272FB0u;
label_272fb0:
    // 0x272fb0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_272fb4:
    if (ctx->pc == 0x272FB4u) {
        ctx->pc = 0x272FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272FB0u;
        // 0x272fb4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272FB8u;
        goto label_272fb8;
    }
    ctx->pc = 0x272FB0u;
    {
        const bool branch_taken_0x272fb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x272FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272FB0u;
        // 0x272fb4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272fb0) {
            ctx->pc = 0x272FC4u;
            goto label_272fc4;
        }
    }
    ctx->pc = 0x272FB8u;
label_272fb8:
    // 0x272fb8: 0x8e420030  lw          $v0, 0x30($s2)
    ctx->pc = 0x272fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_272fbc:
    // 0x272fbc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_272fc0:
    if (ctx->pc == 0x272FC0u) {
        ctx->pc = 0x272FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272FBCu;
        // 0x272fc0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272FC4u;
        goto label_272fc4;
    }
    ctx->pc = 0x272FBCu;
    {
        const bool branch_taken_0x272fbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x272FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272FBCu;
        // 0x272fc0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272fbc) {
            ctx->pc = 0x272FD0u;
            goto label_272fd0;
        }
    }
    ctx->pc = 0x272FC4u;
label_272fc4:
    // 0x272fc4: 0xae570048  sw          $s7, 0x48($s2)
    ctx->pc = 0x272fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 23));
label_272fc8:
    // 0x272fc8: 0xae420040  sw          $v0, 0x40($s2)
    ctx->pc = 0x272fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 2));
label_272fcc:
    // 0x272fcc: 0xae5e004c  sw          $fp, 0x4C($s2)
    ctx->pc = 0x272fccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 76), GPR_U32(ctx, 30));
label_272fd0:
    // 0x272fd0: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x272fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_272fd4:
    // 0x272fd4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_272fd8:
    if (ctx->pc == 0x272FD8u) {
        ctx->pc = 0x272FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272FD4u;
        // 0x272fd8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272FDCu;
        goto label_272fdc;
    }
    ctx->pc = 0x272FD4u;
    {
        const bool branch_taken_0x272fd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x272FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272FD4u;
        // 0x272fd8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272fd4) {
            ctx->pc = 0x272FECu;
            goto label_272fec;
        }
    }
    ctx->pc = 0x272FDCu;
label_272fdc:
    // 0x272fdc: 0xae570048  sw          $s7, 0x48($s2)
    ctx->pc = 0x272fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 23));
label_272fe0:
    // 0x272fe0: 0xae420040  sw          $v0, 0x40($s2)
    ctx->pc = 0x272fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 2));
label_272fe4:
    // 0x272fe4: 0x36760010  ori         $s6, $s3, 0x10
    ctx->pc = 0x272fe4u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)16);
label_272fe8:
    // 0x272fe8: 0xae5e004c  sw          $fp, 0x4C($s2)
    ctx->pc = 0x272fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 76), GPR_U32(ctx, 30));
label_272fec:
    // 0x272fec: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x272fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_272ff0:
    // 0x272ff0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x272ff0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_272ff4:
    // 0x272ff4: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x272ff4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_272ff8:
    // 0x272ff8: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x272ff8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_272ffc:
    // 0x272ffc: 0x40f809  jalr        $v0
label_273000:
    if (ctx->pc == 0x273000u) {
        ctx->pc = 0x273000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272FFCu;
        // 0x273000: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273004u;
        goto label_273004;
    }
    ctx->pc = 0x272FFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x273004u);
        ctx->pc = 0x273000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272FFCu;
        // 0x273000: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x272FFCu, 0x273004u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x273004u;
label_273004:
    // 0x273004: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x273004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_273008:
    // 0x273008: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
label_27300c:
    if (ctx->pc == 0x27300Cu) {
        ctx->pc = 0x273010u;
        goto label_273010;
    }
    ctx->pc = 0x273008u;
    {
        const bool branch_taken_0x273008 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x273008) {
            ctx->pc = 0x273018u;
            goto label_273018;
        }
    }
    ctx->pc = 0x273010u;
label_273010:
    // 0x273010: 0xae430038  sw          $v1, 0x38($s2)
    ctx->pc = 0x273010u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 3));
label_273014:
    // 0x273014: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x273014u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_273018:
    // 0x273018: 0x12400002  beqz        $s2, . + 4 + (0x2 << 2)
label_27301c:
    if (ctx->pc == 0x27301Cu) {
        ctx->pc = 0x27301Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273018u;
        // 0x27301c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273020u;
        goto label_273020;
    }
    ctx->pc = 0x273018u;
    {
        const bool branch_taken_0x273018 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x27301Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273018u;
        // 0x27301c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273018) {
            ctx->pc = 0x273024u;
            goto label_273024;
        }
    }
    ctx->pc = 0x273020u;
label_273020:
    // 0x273020: 0xae420034  sw          $v0, 0x34($s2)
    ctx->pc = 0x273020u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 2));
label_273024:
    // 0x273024: 0x10000002  b           . + 4 + (0x2 << 2)
label_273028:
    if (ctx->pc == 0x273028u) {
        ctx->pc = 0x273028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273024u;
        // 0x273028: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27302Cu;
        goto label_27302c;
    }
    ctx->pc = 0x273024u;
    {
        const bool branch_taken_0x273024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x273028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273024u;
        // 0x273028: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273024) {
            ctx->pc = 0x273030u;
            goto label_273030;
        }
    }
    ctx->pc = 0x27302Cu;
label_27302c:
    // 0x27302c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x27302cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_273030:
    // 0x273030: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x273030u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_273034:
    // 0x273034: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x273034u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_273038:
    // 0x273038: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x273038u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_27303c:
    // 0x27303c: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x27303cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_273040:
    // 0x273040: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x273040u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_273044:
    // 0x273044: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x273044u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_273048:
    // 0x273048: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x273048u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_27304c:
    // 0x27304c: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x27304cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_273050:
    // 0x273050: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x273050u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_273054:
    // 0x273054: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x273054u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_273058:
    // 0x273058: 0x3e00008  jr          $ra
label_27305c:
    if (ctx->pc == 0x27305Cu) {
        ctx->pc = 0x27305Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273058u;
        // 0x27305c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273060u;
        goto label_fallthrough_0x273058;
    }
    ctx->pc = 0x273058u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27305Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273058u;
        // 0x27305c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x273058u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x273058:
    ctx->pc = 0x273060u;
}
