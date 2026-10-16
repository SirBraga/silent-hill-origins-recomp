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

// Function: sub_001DCFE0
// Address: 0x1dcfe0 - 0x1dd078
void sub_001DCFE0_0x1dcfe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DCFE0_0x1dcfe0");
#endif

    switch (ctx->pc) {
        case 0x1dcff8u: goto label_1dcff8;
        case 0x1dd02cu: goto label_1dd02c;
        case 0x1dd054u: goto label_1dd054;
        default: break;
    }

    ctx->pc = 0x1dcfe0u;

    // 0x1dcfe0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1dcfe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1dcfe4: 0x24040a06  addiu       $a0, $zero, 0xA06
    ctx->pc = 0x1dcfe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2566));
    // 0x1dcfe8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1dcfe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1dcfec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dcfecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dcff0: 0xc0957e4  jal         func_255F90
    ctx->pc = 0x1DCFF0u;
    SET_GPR_U32(ctx, 31, 0x1DCFF8u);
    ctx->pc = 0x1DCFF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCFF0u;
    // 0x1dcff4: 0x3c100034  lui         $s0, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)52 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255F90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x255F90u, 0x1DCFF0u, 0x1DCFF8u)) {
        return;
    }
    ctx->pc = 0x1DCFF8u;
label_1dcff8:
    // 0x1dcff8: 0x4400003  bltz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DCFF8u;
    {
        const bool branch_taken_0x1dcff8 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x1DCFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCFF8u;
        // 0x1dcffc: 0xae02e664  sw          $v0, -0x199C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294960740), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcff8) {
            ctx->pc = 0x1DD008u;
            goto label_1dd008;
        }
    }
    ctx->pc = 0x1DD000u;
    // 0x1dd000: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1DD000u;
    {
        const bool branch_taken_0x1dd000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD000u;
        // 0x1dd004: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd000) {
            ctx->pc = 0x1DD068u;
            goto label_1dd068;
        }
    }
    ctx->pc = 0x1DD008u;
label_1dd008:
    // 0x1dd008: 0x3c06001e  lui         $a2, 0x1E
    ctx->pc = 0x1dd008u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)30 << 16));
    // 0x1dd00c: 0x3c07001e  lui         $a3, 0x1E
    ctx->pc = 0x1dd00cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)30 << 16));
    // 0x1dd010: 0x3c08001e  lui         $t0, 0x1E
    ctx->pc = 0x1dd010u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)30 << 16));
    // 0x1dd014: 0x24c6d530  addiu       $a2, $a2, -0x2AD0
    ctx->pc = 0x1dd014u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956336));
    // 0x1dd018: 0x24e7d5d8  addiu       $a3, $a3, -0x2A28
    ctx->pc = 0x1dd018u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294956504));
    // 0x1dd01c: 0x2508c110  addiu       $t0, $t0, -0x3EF0
    ctx->pc = 0x1dd01cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294951184));
    // 0x1dd020: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x1dd020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1dd024: 0xc09579e  jal         func_255E78
    ctx->pc = 0x1DD024u;
    SET_GPR_U32(ctx, 31, 0x1DD02Cu);
    ctx->pc = 0x1DD028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD024u;
    // 0x1dd028: 0x24050a06  addiu       $a1, $zero, 0xA06 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2566));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255E78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x255E78u, 0x1DD024u, 0x1DD02Cu)) {
        return;
    }
    ctx->pc = 0x1DD02Cu;
label_1dd02c:
    // 0x1dd02c: 0x440000d  bltz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1DD02Cu;
    {
        const bool branch_taken_0x1dd02c = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x1DD030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD02Cu;
        // 0x1dd030: 0xae02e664  sw          $v0, -0x199C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294960740), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd02c) {
            ctx->pc = 0x1DD064u;
            goto label_1dd064;
        }
    }
    ctx->pc = 0x1DD034u;
    // 0x1dd034: 0x3c05001e  lui         $a1, 0x1E
    ctx->pc = 0x1dd034u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)30 << 16));
    // 0x1dd038: 0x3c06001e  lui         $a2, 0x1E
    ctx->pc = 0x1dd038u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)30 << 16));
    // 0x1dd03c: 0x3c07001e  lui         $a3, 0x1E
    ctx->pc = 0x1dd03cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)30 << 16));
    // 0x1dd040: 0x24a5d620  addiu       $a1, $a1, -0x29E0
    ctx->pc = 0x1dd040u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956576));
    // 0x1dd044: 0x24c6d708  addiu       $a2, $a2, -0x28F8
    ctx->pc = 0x1dd044u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956808));
    // 0x1dd048: 0x24e7d788  addiu       $a3, $a3, -0x2878
    ctx->pc = 0x1dd048u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294956936));
    // 0x1dd04c: 0xc0957c2  jal         func_255F08
    ctx->pc = 0x1DD04Cu;
    SET_GPR_U32(ctx, 31, 0x1DD054u);
    ctx->pc = 0x1DD050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD04Cu;
    // 0x1dd050: 0x24040a06  addiu       $a0, $zero, 0xA06 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2566));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255F08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x255F08u, 0x1DD04Cu, 0x1DD054u)) {
        return;
    }
    ctx->pc = 0x1DD054u;
label_1dd054:
    // 0x1dd054: 0x8e03e664  lw          $v1, -0x199C($s0)
    ctx->pc = 0x1dd054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294960740)));
    // 0x1dd058: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1dd058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1dd05c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1DD05Cu;
    {
        const bool branch_taken_0x1dd05c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD05Cu;
        // 0x1dd060: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd05c) {
            ctx->pc = 0x1DD068u;
            goto label_1dd068;
        }
    }
    ctx->pc = 0x1DD064u;
label_1dd064:
    // 0x1dd064: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1dd064u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dd068:
    // 0x1dd068: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1dd068u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dd06c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dd06cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dd070: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD070u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD070u;
        // 0x1dd074: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD070u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD078u;
}
