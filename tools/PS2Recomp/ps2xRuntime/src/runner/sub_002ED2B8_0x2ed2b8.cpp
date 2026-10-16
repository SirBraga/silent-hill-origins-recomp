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

// Function: sub_002ED2B8
// Address: 0x2ed2b8 - 0x2ed328
void sub_002ED2B8_0x2ed2b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ED2B8_0x2ed2b8");
#endif

    switch (ctx->pc) {
        case 0x2ed2d4u: goto label_2ed2d4;
        case 0x2ed2ecu: goto label_2ed2ec;
        case 0x2ed30cu: goto label_2ed30c;
        default: break;
    }

    ctx->pc = 0x2ed2b8u;

    // 0x2ed2b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ed2b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ed2bc: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2ed2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x2ed2c0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2ed2c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2ed2c4: 0x2450e818  addiu       $s0, $v0, -0x17E8
    ctx->pc = 0x2ed2c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961176));
    // 0x2ed2c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ed2c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ed2cc: 0xc0b6c62  jal         func_2DB188
    ctx->pc = 0x2ED2CCu;
    SET_GPR_U32(ctx, 31, 0x2ED2D4u);
    ctx->pc = 0x2ED2D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED2CCu;
    // 0x2ed2d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB188u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DB188u, 0x2ED2CCu, 0x2ED2D4u)) {
        return;
    }
    ctx->pc = 0x2ED2D4u;
label_2ed2d4:
    // 0x2ed2d4: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2ED2D4u;
    {
        const bool branch_taken_0x2ed2d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED2D4u;
        // 0x2ed2d8: 0x3c05006b  lui         $a1, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed2d4) {
            ctx->pc = 0x2ED314u;
            goto label_2ed314;
        }
    }
    ctx->pc = 0x2ED2DCu;
    // 0x2ed2dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ed2dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed2e0: 0x24a5ff78  addiu       $a1, $a1, -0x88
    ctx->pc = 0x2ed2e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967160));
    // 0x2ed2e4: 0xc0b6c52  jal         func_2DB148
    ctx->pc = 0x2ED2E4u;
    SET_GPR_U32(ctx, 31, 0x2ED2ECu);
    ctx->pc = 0x2ED2E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED2E4u;
    // 0x2ed2e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB148u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DB148u, 0x2ED2E4u, 0x2ED2ECu)) {
        return;
    }
    ctx->pc = 0x2ED2ECu;
label_2ed2ec:
    // 0x2ed2ec: 0x3c050068  lui         $a1, 0x68
    ctx->pc = 0x2ed2ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)104 << 16));
    // 0x2ed2f0: 0x3c070068  lui         $a3, 0x68
    ctx->pc = 0x2ed2f0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)104 << 16));
    // 0x2ed2f4: 0x24a56080  addiu       $a1, $a1, 0x6080
    ctx->pc = 0x2ed2f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24704));
    // 0x2ed2f8: 0x24e76170  addiu       $a3, $a3, 0x6170
    ctx->pc = 0x2ed2f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 24944));
    // 0x2ed2fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ed2fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed300: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x2ed300u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2ed304: 0xc0b6cfc  jal         func_2DB3F0
    ctx->pc = 0x2ED304u;
    SET_GPR_U32(ctx, 31, 0x2ED30Cu);
    ctx->pc = 0x2ED308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED304u;
    // 0x2ed308: 0x2408000d  addiu       $t0, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB3F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DB3F0u, 0x2ED304u, 0x2ED30Cu)) {
        return;
    }
    ctx->pc = 0x2ED30Cu;
label_2ed30c:
    // 0x2ed30c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2ED30Cu;
    {
        const bool branch_taken_0x2ed30c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED30Cu;
        // 0x2ed310: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed30c) {
            ctx->pc = 0x2ED318u;
            goto label_2ed318;
        }
    }
    ctx->pc = 0x2ED314u;
label_2ed314:
    // 0x2ed314: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ed314u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ed318:
    // 0x2ed318: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2ed318u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ed31c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ed31cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ed320: 0x3e00008  jr          $ra
    ctx->pc = 0x2ED320u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ED324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED320u;
        // 0x2ed324: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ED320u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ED328u;
}
