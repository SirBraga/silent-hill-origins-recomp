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

// Function: sub_001F4920
// Address: 0x1f4920 - 0x1f4970
void sub_001F4920_0x1f4920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F4920_0x1f4920");
#endif

    switch (ctx->pc) {
        case 0x1f4920u: goto label_1f4920;
        case 0x1f4924u: goto label_1f4924;
        case 0x1f4928u: goto label_1f4928;
        case 0x1f492cu: goto label_1f492c;
        case 0x1f4930u: goto label_1f4930;
        case 0x1f4934u: goto label_1f4934;
        case 0x1f4938u: goto label_1f4938;
        case 0x1f493cu: goto label_1f493c;
        case 0x1f4940u: goto label_1f4940;
        case 0x1f4944u: goto label_1f4944;
        case 0x1f4948u: goto label_1f4948;
        case 0x1f494cu: goto label_1f494c;
        case 0x1f4950u: goto label_1f4950;
        case 0x1f4954u: goto label_1f4954;
        case 0x1f4958u: goto label_1f4958;
        case 0x1f495cu: goto label_1f495c;
        case 0x1f4960u: goto label_1f4960;
        case 0x1f4964u: goto label_1f4964;
        case 0x1f4968u: goto label_1f4968;
        case 0x1f496cu: goto label_1f496c;
        default: break;
    }

    ctx->pc = 0x1f4920u;

label_1f4920:
    // 0x1f4920: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x1f4920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_1f4924:
    // 0x1f4924: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1f4924u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
label_1f4928:
    // 0x1f4928: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f4928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1f492c:
    // 0x1f492c: 0x8c444144  lw          $a0, 0x4144($v0)
    ctx->pc = 0x1f492cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16708)));
label_1f4930:
    // 0x1f4930: 0x8c65eb00  lw          $a1, -0x1500($v1)
    ctx->pc = 0x1f4930u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961920)));
label_1f4934:
    // 0x1f4934: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f4934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1f4938:
    // 0x1f4938: 0xc07d3a6  jal         func_1F4E98
label_1f493c:
    if (ctx->pc == 0x1F493Cu) {
        ctx->pc = 0x1F493Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4938u;
        // 0x1f493c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4940u;
        goto label_1f4940;
    }
    ctx->pc = 0x1F4938u;
    SET_GPR_U32(ctx, 31, 0x1F4940u);
    ctx->pc = 0x1F493Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4938u;
    // 0x1f493c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4E98u, 0x1F4938u, 0x1F4940u)) {
        return;
    }
    ctx->pc = 0x1F4940u;
label_1f4940:
    // 0x1f4940: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1f4940u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f4944:
    // 0x1f4944: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
label_1f4948:
    if (ctx->pc == 0x1F4948u) {
        ctx->pc = 0x1F4948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4944u;
        // 0x1f4948: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F494Cu;
        goto label_1f494c;
    }
    ctx->pc = 0x1F4944u;
    {
        const bool branch_taken_0x1f4944 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4944u;
        // 0x1f4948: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4944) {
            ctx->pc = 0x1F4960u;
            goto label_1f4960;
        }
    }
    ctx->pc = 0x1F494Cu;
label_1f494c:
    // 0x1f494c: 0x8cc20024  lw          $v0, 0x24($a2)
    ctx->pc = 0x1f494cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
label_1f4950:
    // 0x1f4950: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x1f4950u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_1f4954:
    // 0x1f4954: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1f4954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1f4958:
    // 0x1f4958: 0x60f809  jalr        $v1
label_1f495c:
    if (ctx->pc == 0x1F495Cu) {
        ctx->pc = 0x1F495Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4958u;
        // 0x1f495c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4960u;
        goto label_1f4960;
    }
    ctx->pc = 0x1F4958u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F4960u);
        ctx->pc = 0x1F495Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4958u;
        // 0x1f495c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F4958u, 0x1F4960u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F4960u;
label_1f4960:
    // 0x1f4960: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f4960u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f4964:
    // 0x1f4964: 0x3e00008  jr          $ra
label_1f4968:
    if (ctx->pc == 0x1F4968u) {
        ctx->pc = 0x1F4968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4964u;
        // 0x1f4968: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F496Cu;
        goto label_1f496c;
    }
    ctx->pc = 0x1F4964u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F4968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4964u;
        // 0x1f4968: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F4964u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F496Cu;
label_1f496c:
    // 0x1f496c: 0x0  nop
    ctx->pc = 0x1f496cu;
    // NOP
    ctx->pc = 0x1f4970u;
}
