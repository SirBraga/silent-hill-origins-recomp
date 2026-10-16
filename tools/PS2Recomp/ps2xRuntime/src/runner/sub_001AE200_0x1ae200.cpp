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

// Function: sub_001AE200
// Address: 0x1ae200 - 0x1ae268
void sub_001AE200_0x1ae200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AE200_0x1ae200");
#endif

    switch (ctx->pc) {
        case 0x1ae22cu: goto label_1ae22c;
        case 0x1ae23cu: goto label_1ae23c;
        case 0x1ae24cu: goto label_1ae24c;
        default: break;
    }

    ctx->pc = 0x1ae200u;

    // 0x1ae200: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ae200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ae204: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ae204u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae208: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1ae208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1ae20c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ae20cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ae210: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1ae210u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae214: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ae214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ae218: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x1AE218u;
    {
        const bool branch_taken_0x1ae218 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE218u;
        // 0x1ae21c: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae218) {
            ctx->pc = 0x1AE250u;
            goto label_1ae250;
        }
    }
    ctx->pc = 0x1AE220u;
    // 0x1ae220: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ae220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae224: 0xc07cd92  jal         func_1F3648
    ctx->pc = 0x1AE224u;
    SET_GPR_U32(ctx, 31, 0x1AE22Cu);
    ctx->pc = 0x1AE228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE224u;
    // 0x1ae228: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3648u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F3648u, 0x1AE224u, 0x1AE22Cu)) {
        return;
    }
    ctx->pc = 0x1AE22Cu;
label_1ae22c:
    // 0x1ae22c: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1AE22Cu;
    {
        const bool branch_taken_0x1ae22c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ae22c) {
            ctx->pc = 0x1AE230u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AE22Cu;
            // 0x1ae230: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AE254u;
            goto label_1ae254;
        }
    }
    ctx->pc = 0x1AE234u;
    // 0x1ae234: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1AE234u;
    SET_GPR_U32(ctx, 31, 0x1AE23Cu);
    ctx->pc = 0x1AE238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE234u;
    // 0x1ae238: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1AE234u, 0x1AE23Cu)) {
        return;
    }
    ctx->pc = 0x1AE23Cu;
label_1ae23c:
    // 0x1ae23c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ae23cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae240: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ae240u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae244: 0xc081baa  jal         func_206EA8
    ctx->pc = 0x1AE244u;
    SET_GPR_U32(ctx, 31, 0x1AE24Cu);
    ctx->pc = 0x1AE248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE244u;
    // 0x1ae248: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206EA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206EA8u, 0x1AE244u, 0x1AE24Cu)) {
        return;
    }
    ctx->pc = 0x1AE24Cu;
label_1ae24c:
    // 0x1ae24c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1ae24cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1ae250:
    // 0x1ae250: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1ae250u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1ae254:
    // 0x1ae254: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ae254u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ae258: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ae258u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ae25c: 0x3e00008  jr          $ra
    ctx->pc = 0x1AE25Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AE260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE25Cu;
        // 0x1ae260: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AE25Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AE264u;
    // 0x1ae264: 0x0  nop
    ctx->pc = 0x1ae264u;
    // NOP
    ctx->pc = 0x1ae268u;
}
