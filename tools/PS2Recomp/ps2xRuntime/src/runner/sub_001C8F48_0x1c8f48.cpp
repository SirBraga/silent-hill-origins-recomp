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

// Function: sub_001C8F48
// Address: 0x1c8f48 - 0x1c9010
void sub_001C8F48_0x1c8f48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C8F48_0x1c8f48");
#endif

    switch (ctx->pc) {
        case 0x1c8f48u: goto label_1c8f48;
        case 0x1c8f4cu: goto label_1c8f4c;
        case 0x1c8f50u: goto label_1c8f50;
        case 0x1c8f54u: goto label_1c8f54;
        case 0x1c8f58u: goto label_1c8f58;
        case 0x1c8f5cu: goto label_1c8f5c;
        case 0x1c8f60u: goto label_1c8f60;
        case 0x1c8f64u: goto label_1c8f64;
        case 0x1c8f68u: goto label_1c8f68;
        case 0x1c8f6cu: goto label_1c8f6c;
        case 0x1c8f70u: goto label_1c8f70;
        case 0x1c8f74u: goto label_1c8f74;
        case 0x1c8f78u: goto label_1c8f78;
        case 0x1c8f7cu: goto label_1c8f7c;
        case 0x1c8f80u: goto label_1c8f80;
        case 0x1c8f84u: goto label_1c8f84;
        case 0x1c8f88u: goto label_1c8f88;
        case 0x1c8f8cu: goto label_1c8f8c;
        case 0x1c8f90u: goto label_1c8f90;
        case 0x1c8f94u: goto label_1c8f94;
        case 0x1c8f98u: goto label_1c8f98;
        case 0x1c8f9cu: goto label_1c8f9c;
        case 0x1c8fa0u: goto label_1c8fa0;
        case 0x1c8fa4u: goto label_1c8fa4;
        case 0x1c8fa8u: goto label_1c8fa8;
        case 0x1c8facu: goto label_1c8fac;
        case 0x1c8fb0u: goto label_1c8fb0;
        case 0x1c8fb4u: goto label_1c8fb4;
        case 0x1c8fb8u: goto label_1c8fb8;
        case 0x1c8fbcu: goto label_1c8fbc;
        case 0x1c8fc0u: goto label_1c8fc0;
        case 0x1c8fc4u: goto label_1c8fc4;
        case 0x1c8fc8u: goto label_1c8fc8;
        case 0x1c8fccu: goto label_1c8fcc;
        case 0x1c8fd0u: goto label_1c8fd0;
        case 0x1c8fd4u: goto label_1c8fd4;
        case 0x1c8fd8u: goto label_1c8fd8;
        case 0x1c8fdcu: goto label_1c8fdc;
        case 0x1c8fe0u: goto label_1c8fe0;
        case 0x1c8fe4u: goto label_1c8fe4;
        case 0x1c8fe8u: goto label_1c8fe8;
        case 0x1c8fecu: goto label_1c8fec;
        case 0x1c8ff0u: goto label_1c8ff0;
        case 0x1c8ff4u: goto label_1c8ff4;
        case 0x1c8ff8u: goto label_1c8ff8;
        case 0x1c8ffcu: goto label_1c8ffc;
        case 0x1c9000u: goto label_1c9000;
        case 0x1c9004u: goto label_1c9004;
        case 0x1c9008u: goto label_1c9008;
        case 0x1c900cu: goto label_1c900c;
        default: break;
    }

    ctx->pc = 0x1c8f48u;

label_1c8f48:
    // 0x1c8f48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c8f48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1c8f4c:
    // 0x1c8f4c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1c8f4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1c8f50:
    // 0x1c8f50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c8f50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1c8f54:
    // 0x1c8f54: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c8f54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c8f58:
    // 0x1c8f58: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x1c8f58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
label_1c8f5c:
    // 0x1c8f5c: 0x8e02026c  lw          $v0, 0x26C($s0)
    ctx->pc = 0x1c8f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 620)));
label_1c8f60:
    // 0x1c8f60: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1c8f64:
    if (ctx->pc == 0x1C8F64u) {
        ctx->pc = 0x1C8F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8F60u;
        // 0x1c8f64: 0x8e050268  lw          $a1, 0x268($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 616)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8F68u;
        goto label_1c8f68;
    }
    ctx->pc = 0x1C8F60u;
    {
        const bool branch_taken_0x1c8f60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8F60u;
        // 0x1c8f64: 0x8e050268  lw          $a1, 0x268($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 616)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8f60) {
            ctx->pc = 0x1C8F84u;
            goto label_1c8f84;
        }
    }
    ctx->pc = 0x1C8F68u;
label_1c8f68:
    // 0x1c8f68: 0x8ca20034  lw          $v0, 0x34($a1)
    ctx->pc = 0x1c8f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_1c8f6c:
    // 0x1c8f6c: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1c8f6cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1c8f70:
    // 0x1c8f70: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1c8f70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1c8f74:
    // 0x1c8f74: 0x60f809  jalr        $v1
label_1c8f78:
    if (ctx->pc == 0x1C8F78u) {
        ctx->pc = 0x1C8F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8F74u;
        // 0x1c8f78: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8F7Cu;
        goto label_1c8f7c;
    }
    ctx->pc = 0x1C8F74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1C8F7Cu);
        ctx->pc = 0x1C8F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8F74u;
        // 0x1c8f78: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C8F74u, 0x1C8F7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C8F7Cu;
label_1c8f7c:
    // 0x1c8f7c: 0x10000007  b           . + 4 + (0x7 << 2)
label_1c8f80:
    if (ctx->pc == 0x1C8F80u) {
        ctx->pc = 0x1C8F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8F7Cu;
        // 0x1c8f80: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8F84u;
        goto label_1c8f84;
    }
    ctx->pc = 0x1C8F7Cu;
    {
        const bool branch_taken_0x1c8f7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8F7Cu;
        // 0x1c8f80: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8f7c) {
            ctx->pc = 0x1C8F9Cu;
            goto label_1c8f9c;
        }
    }
    ctx->pc = 0x1C8F84u;
label_1c8f84:
    // 0x1c8f84: 0x8ca20034  lw          $v0, 0x34($a1)
    ctx->pc = 0x1c8f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_1c8f88:
    // 0x1c8f88: 0x84440048  lh          $a0, 0x48($v0)
    ctx->pc = 0x1c8f88u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
label_1c8f8c:
    // 0x1c8f8c: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x1c8f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_1c8f90:
    // 0x1c8f90: 0x60f809  jalr        $v1
label_1c8f94:
    if (ctx->pc == 0x1C8F94u) {
        ctx->pc = 0x1C8F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8F90u;
        // 0x1c8f94: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8F98u;
        goto label_1c8f98;
    }
    ctx->pc = 0x1C8F90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1C8F98u);
        ctx->pc = 0x1C8F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8F90u;
        // 0x1c8f94: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C8F90u, 0x1C8F98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C8F98u;
label_1c8f98:
    // 0x1c8f98: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1c8f98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1c8f9c:
    // 0x1c8f9c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1c8f9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c8fa0:
    // 0x1c8fa0: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x1c8fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_1c8fa4:
    // 0x1c8fa4: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1c8fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1c8fa8:
    // 0x1c8fa8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1c8fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1c8fac:
    // 0x1c8fac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c8facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1c8fb0:
    // 0x1c8fb0: 0x28a40008  slti        $a0, $a1, 0x8
    ctx->pc = 0x1c8fb0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8) ? 1 : 0);
label_1c8fb4:
    // 0x1c8fb4: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
label_1c8fb8:
    if (ctx->pc == 0x1C8FB8u) {
        ctx->pc = 0x1C8FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8FB4u;
        // 0x1c8fb8: 0xac4601d0  sw          $a2, 0x1D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 464), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8FBCu;
        goto label_1c8fbc;
    }
    ctx->pc = 0x1C8FB4u;
    {
        const bool branch_taken_0x1c8fb4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C8FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8FB4u;
        // 0x1c8fb8: 0xac4601d0  sw          $a2, 0x1D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 464), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8fb4) {
            ctx->pc = 0x1C8FA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c8fa0;
        }
    }
    ctx->pc = 0x1C8FBCu;
label_1c8fbc:
    // 0x1c8fbc: 0x8e030044  lw          $v1, 0x44($s0)
    ctx->pc = 0x1c8fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_1c8fc0:
    // 0x1c8fc0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c8fc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c8fc4:
    // 0x1c8fc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c8fc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c8fc8:
    // 0x1c8fc8: 0xac6500f4  sw          $a1, 0xF4($v1)
    ctx->pc = 0x1c8fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 244), GPR_U32(ctx, 5));
label_1c8fcc:
    // 0x1c8fcc: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x1c8fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_1c8fd0:
    // 0x1c8fd0: 0xac45002c  sw          $a1, 0x2C($v0)
    ctx->pc = 0x1c8fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 5));
label_1c8fd4:
    // 0x1c8fd4: 0x8e030044  lw          $v1, 0x44($s0)
    ctx->pc = 0x1c8fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_1c8fd8:
    // 0x1c8fd8: 0xac6501d0  sw          $a1, 0x1D0($v1)
    ctx->pc = 0x1c8fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 464), GPR_U32(ctx, 5));
label_1c8fdc:
    // 0x1c8fdc: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x1c8fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_1c8fe0:
    // 0x1c8fe0: 0xac4501f8  sw          $a1, 0x1F8($v0)
    ctx->pc = 0x1c8fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 504), GPR_U32(ctx, 5));
label_1c8fe4:
    // 0x1c8fe4: 0x8e030044  lw          $v1, 0x44($s0)
    ctx->pc = 0x1c8fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_1c8fe8:
    // 0x1c8fe8: 0xac6501fc  sw          $a1, 0x1FC($v1)
    ctx->pc = 0x1c8fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 508), GPR_U32(ctx, 5));
label_1c8fec:
    // 0x1c8fec: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x1c8fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_1c8ff0:
    // 0x1c8ff0: 0xac4501d8  sw          $a1, 0x1D8($v0)
    ctx->pc = 0x1c8ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 472), GPR_U32(ctx, 5));
label_1c8ff4:
    // 0x1c8ff4: 0x8e030044  lw          $v1, 0x44($s0)
    ctx->pc = 0x1c8ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_1c8ff8:
    // 0x1c8ff8: 0xc072404  jal         func_1C9010
label_1c8ffc:
    if (ctx->pc == 0x1C8FFCu) {
        ctx->pc = 0x1C8FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8FF8u;
        // 0x1c8ffc: 0xac6501dc  sw          $a1, 0x1DC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 476), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9000u;
        goto label_1c9000;
    }
    ctx->pc = 0x1C8FF8u;
    SET_GPR_U32(ctx, 31, 0x1C9000u);
    ctx->pc = 0x1C8FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8FF8u;
    // 0x1c8ffc: 0xac6501dc  sw          $a1, 0x1DC($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 476), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C9010u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1C9010u, 0x1C8FF8u, 0x1C9000u)) {
        return;
    }
    ctx->pc = 0x1C9000u;
label_1c9000:
    // 0x1c9000: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1c9000u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1c9004:
    // 0x1c9004: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c9004u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c9008:
    // 0x1c9008: 0x3e00008  jr          $ra
label_1c900c:
    if (ctx->pc == 0x1C900Cu) {
        ctx->pc = 0x1C900Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9008u;
        // 0x1c900c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9010u;
        goto label_fallthrough_0x1c9008;
    }
    ctx->pc = 0x1C9008u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C900Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9008u;
        // 0x1c900c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C9008u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1c9008:
    ctx->pc = 0x1C9010u;
}
