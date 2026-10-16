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

// Function: sub_002E8958
// Address: 0x2e8958 - 0x2e89c8
void sub_002E8958_0x2e8958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E8958_0x2e8958");
#endif

    switch (ctx->pc) {
        case 0x2e8974u: goto label_2e8974;
        case 0x2e898cu: goto label_2e898c;
        case 0x2e89acu: goto label_2e89ac;
        default: break;
    }

    ctx->pc = 0x2e8958u;

    // 0x2e8958: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e8958u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e895c: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2e895cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x2e8960: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2e8960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2e8964: 0x24508590  addiu       $s0, $v0, -0x7A70
    ctx->pc = 0x2e8964u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935952));
    // 0x2e8968: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e8968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e896c: 0xc0b6c62  jal         func_2DB188
    ctx->pc = 0x2E896Cu;
    SET_GPR_U32(ctx, 31, 0x2E8974u);
    ctx->pc = 0x2E8970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E896Cu;
    // 0x2e8970: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB188u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DB188u, 0x2E896Cu, 0x2E8974u)) {
        return;
    }
    ctx->pc = 0x2E8974u;
label_2e8974:
    // 0x2e8974: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2E8974u;
    {
        const bool branch_taken_0x2e8974 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8974u;
        // 0x2e8978: 0x3c05006b  lui         $a1, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8974) {
            ctx->pc = 0x2E89B4u;
            goto label_2e89b4;
        }
    }
    ctx->pc = 0x2E897Cu;
    // 0x2e897c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e897cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8980: 0x24a5fbe0  addiu       $a1, $a1, -0x420
    ctx->pc = 0x2e8980u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966240));
    // 0x2e8984: 0xc0b6c52  jal         func_2DB148
    ctx->pc = 0x2E8984u;
    SET_GPR_U32(ctx, 31, 0x2E898Cu);
    ctx->pc = 0x2E8988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8984u;
    // 0x2e8988: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB148u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DB148u, 0x2E8984u, 0x2E898Cu)) {
        return;
    }
    ctx->pc = 0x2E898Cu;
label_2e898c:
    // 0x2e898c: 0x3c050068  lui         $a1, 0x68
    ctx->pc = 0x2e898cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)104 << 16));
    // 0x2e8990: 0x3c070068  lui         $a3, 0x68
    ctx->pc = 0x2e8990u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)104 << 16));
    // 0x2e8994: 0x24a558f8  addiu       $a1, $a1, 0x58F8
    ctx->pc = 0x2e8994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22776));
    // 0x2e8998: 0x24e75998  addiu       $a3, $a3, 0x5998
    ctx->pc = 0x2e8998u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 22936));
    // 0x2e899c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e899cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e89a0: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x2e89a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2e89a4: 0xc0b6cfc  jal         func_2DB3F0
    ctx->pc = 0x2E89A4u;
    SET_GPR_U32(ctx, 31, 0x2E89ACu);
    ctx->pc = 0x2E89A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E89A4u;
    // 0x2e89a8: 0x24080009  addiu       $t0, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB3F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DB3F0u, 0x2E89A4u, 0x2E89ACu)) {
        return;
    }
    ctx->pc = 0x2E89ACu;
label_2e89ac:
    // 0x2e89ac: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E89ACu;
    {
        const bool branch_taken_0x2e89ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E89B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E89ACu;
        // 0x2e89b0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e89ac) {
            ctx->pc = 0x2E89B8u;
            goto label_2e89b8;
        }
    }
    ctx->pc = 0x2E89B4u;
label_2e89b4:
    // 0x2e89b4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e89b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e89b8:
    // 0x2e89b8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2e89b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e89bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e89bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e89c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2E89C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E89C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E89C0u;
        // 0x2e89c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E89C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E89C8u;
}
