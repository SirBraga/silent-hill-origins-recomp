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

// Function: sub_002F7118
// Address: 0x2f7118 - 0x2f71a8
void sub_002F7118_0x2f7118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F7118_0x2f7118");
#endif

    switch (ctx->pc) {
        case 0x2f7148u: goto label_2f7148;
        case 0x2f7178u: goto label_2f7178;
        default: break;
    }

    ctx->pc = 0x2f7118u;

    // 0x2f7118: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2f7118u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x2f711c: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2f711cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2f7120: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x2f7120u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x2f7124: 0x244201b8  addiu       $v0, $v0, 0x1B8
    ctx->pc = 0x2f7124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 440));
    // 0x2f7128: 0x2405007f  addiu       $a1, $zero, 0x7F
    ctx->pc = 0x2f7128u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x2f712c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2f712cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2f7130: 0xac606648  sw          $zero, 0x6648($v1)
    ctx->pc = 0x2f7130u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x686648u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x686648u, _value); } while (0);
    // 0x2f7134: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2f7134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7138: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x2f7138u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x2f713c: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x2f713cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x2f7140: 0xc0c84c8  jal         func_321320
    ctx->pc = 0x2F7140u;
    SET_GPR_U32(ctx, 31, 0x2F7148u);
    ctx->pc = 0x2F7144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7140u;
    // 0x2f7144: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321320u, 0x2F7140u, 0x2F7148u)) {
        return;
    }
    ctx->pc = 0x2F7148u;
label_2f7148:
    // 0x2f7148: 0x3c030072  lui         $v1, 0x72
    ctx->pc = 0x2f7148u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)114 << 16));
    // 0x2f714c: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F714Cu;
    {
        const bool branch_taken_0x2f714c = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x2F7150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F714Cu;
        // 0x2f7150: 0xac6214c0  sw          $v0, 0x14C0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 5312), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f714c) {
            ctx->pc = 0x2F715Cu;
            goto label_2f715c;
        }
    }
    ctx->pc = 0x2F7154u;
    // 0x2f7154: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2F7154u;
    {
        const bool branch_taken_0x2f7154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7154u;
        // 0x2f7158: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7154) {
            ctx->pc = 0x2F719Cu;
            goto label_2f719c;
        }
    }
    ctx->pc = 0x2F715Cu;
label_2f715c:
    // 0x2f715c: 0x3c020072  lui         $v0, 0x72
    ctx->pc = 0x2f715cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)114 << 16));
    // 0x2f7160: 0x24070200  addiu       $a3, $zero, 0x200
    ctx->pc = 0x2f7160u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x2f7164: 0x244314c8  addiu       $v1, $v0, 0x14C8
    ctx->pc = 0x2f7164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 5320));
    // 0x2f7168: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x2f7168u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2f716c: 0x24650048  addiu       $a1, $v1, 0x48
    ctx->pc = 0x2f716cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 72));
    // 0x2f7170: 0x24044000  addiu       $a0, $zero, 0x4000
    ctx->pc = 0x2f7170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2f7174: 0x0  nop
    ctx->pc = 0x2f7174u;
    // NOP
label_2f7178:
    // 0x2f7178: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x2f7178u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x2f717c: 0xac670008  sw          $a3, 0x8($v1)
    ctx->pc = 0x2f717cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 7));
    // 0x2f7180: 0xac66000c  sw          $a2, 0xC($v1)
    ctx->pc = 0x2f7180u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
    // 0x2f7184: 0xac640010  sw          $a0, 0x10($v1)
    ctx->pc = 0x2f7184u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 4));
    // 0x2f7188: 0x24630024  addiu       $v1, $v1, 0x24
    ctx->pc = 0x2f7188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 36));
    // 0x2f718c: 0x65102a  slt         $v0, $v1, $a1
    ctx->pc = 0x2f718cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2f7190: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2F7190u;
    {
        const bool branch_taken_0x2f7190 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f7190) {
            ctx->pc = 0x2F7178u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f7178;
        }
    }
    ctx->pc = 0x2F7198u;
    // 0x2f7198: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f7198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f719c:
    // 0x2f719c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2f719cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f71a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2F71A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F71A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F71A0u;
        // 0x2f71a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F71A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F71A8u;
}
