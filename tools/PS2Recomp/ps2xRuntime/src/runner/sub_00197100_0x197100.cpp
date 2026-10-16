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

// Function: sub_00197100
// Address: 0x197100 - 0x197160
void sub_00197100_0x197100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00197100_0x197100");
#endif

    switch (ctx->pc) {
        case 0x197120u: goto label_197120;
        default: break;
    }

    ctx->pc = 0x197100u;

    // 0x197100: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x197100u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197104: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x197104u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x197108: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x197108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19710c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x19710Cu;
    {
        const bool branch_taken_0x19710c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x197110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19710Cu;
        // 0x197110: 0x90c30000  lbu         $v1, 0x0($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19710c) {
            ctx->pc = 0x197158u;
            goto label_197158;
        }
    }
    ctx->pc = 0x197114u;
    // 0x197114: 0x10a00010  beqz        $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x197114u;
    {
        const bool branch_taken_0x197114 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x197118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197114u;
        // 0x197118: 0x2407ffdf  addiu       $a3, $zero, -0x21 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197114) {
            ctx->pc = 0x197158u;
            goto label_197158;
        }
    }
    ctx->pc = 0x19711Cu;
    // 0x19711c: 0x671024  and         $v0, $v1, $a3
    ctx->pc = 0x19711cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
label_197120:
    // 0x197120: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x197120u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x197124: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x197124u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x197128: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x197128u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x19712c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x19712cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x197130: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x197130u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x197134: 0x621826  xor         $v1, $v1, $v0
    ctx->pc = 0x197134u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x197138: 0x42742  srl         $a0, $a0, 29
    ctx->pc = 0x197138u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 29));
    // 0x19713c: 0x642026  xor         $a0, $v1, $a0
    ctx->pc = 0x19713cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 4));
    // 0x197140: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x197140u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x197144: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x197144u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x197148: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x197148u;
    {
        const bool branch_taken_0x197148 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19714Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197148u;
        // 0x19714c: 0x90c30000  lbu         $v1, 0x0($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197148) {
            ctx->pc = 0x197158u;
            goto label_197158;
        }
    }
    ctx->pc = 0x197150u;
    // 0x197150: 0x14a0fff3  bnez        $a1, . + 4 + (-0xD << 2)
    ctx->pc = 0x197150u;
    {
        const bool branch_taken_0x197150 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x197154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197150u;
        // 0x197154: 0x671024  and         $v0, $v1, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197150) {
            ctx->pc = 0x197120u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_197120;
        }
    }
    ctx->pc = 0x197158u;
label_197158:
    // 0x197158: 0x3e00008  jr          $ra
    ctx->pc = 0x197158u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19715Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197158u;
        // 0x19715c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197158u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x197160u;
}
