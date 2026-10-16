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

// Function: sub_002E4360
// Address: 0x2e4360 - 0x2e43f8
void sub_002E4360_0x2e4360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E4360_0x2e4360");
#endif

    switch (ctx->pc) {
        case 0x2e4374u: goto label_2e4374;
        case 0x2e437cu: goto label_2e437c;
        case 0x2e43a4u: goto label_2e43a4;
        case 0x2e43ccu: goto label_2e43cc;
        case 0x2e43e8u: goto label_2e43e8;
        default: break;
    }

    ctx->pc = 0x2e4360u;

    // 0x2e4360: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e4360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e4364: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2e4364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2e4368: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e4368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e436c: 0xc0b90fe  jal         func_2E43F8
    ctx->pc = 0x2E436Cu;
    SET_GPR_U32(ctx, 31, 0x2E4374u);
    ctx->pc = 0x2E4370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E436Cu;
    // 0x2e4370: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E43F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E43F8u, 0x2E436Cu, 0x2E4374u)) {
        return;
    }
    ctx->pc = 0x2E4374u;
label_2e4374:
    // 0x2e4374: 0xc0b7d76  jal         func_2DF5D8
    ctx->pc = 0x2E4374u;
    SET_GPR_U32(ctx, 31, 0x2E437Cu);
    ctx->pc = 0x2E4378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4374u;
    // 0x2e4378: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF5D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DF5D8u, 0x2E4374u, 0x2E437Cu)) {
        return;
    }
    ctx->pc = 0x2E437Cu;
label_2e437c:
    // 0x2e437c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x2e437cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2e4380: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x2e4380u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x2e4384: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E4384u;
    {
        const bool branch_taken_0x2e4384 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4384u;
        // 0x2e4388: 0x30620020  andi        $v0, $v1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4384) {
            ctx->pc = 0x2E43A8u;
            goto label_2e43a8;
        }
    }
    ctx->pc = 0x2E438Cu;
    // 0x2e438c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E438Cu;
    {
        const bool branch_taken_0x2e438c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E4390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E438Cu;
        // 0x2e4390: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e438c) {
            ctx->pc = 0x2E43ACu;
            goto label_2e43ac;
        }
    }
    ctx->pc = 0x2E4394u;
    // 0x2e4394: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x2e4394u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
    // 0x2e4398: 0x8e050050  lw          $a1, 0x50($s0)
    ctx->pc = 0x2e4398u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x2e439c: 0xc0b81ea  jal         func_2E07A8
    ctx->pc = 0x2E439Cu;
    SET_GPR_U32(ctx, 31, 0x2E43A4u);
    ctx->pc = 0x2E43A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E439Cu;
    // 0x2e43a0: 0x24848360  addiu       $a0, $a0, -0x7CA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E07A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E07A8u, 0x2E439Cu, 0x2E43A4u)) {
        return;
    }
    ctx->pc = 0x2E43A4u;
label_2e43a4:
    // 0x2e43a4: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x2e43a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2e43a8:
    // 0x2e43a8: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x2e43a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_2e43ac:
    // 0x2e43ac: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E43ACu;
    {
        const bool branch_taken_0x2e43ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E43B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E43ACu;
        // 0x2e43b0: 0x30620010  andi        $v0, $v1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e43ac) {
            ctx->pc = 0x2E43CCu;
            goto label_2e43cc;
        }
    }
    ctx->pc = 0x2E43B4u;
    // 0x2e43b4: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E43B4u;
    {
        const bool branch_taken_0x2e43b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e43b4) {
            ctx->pc = 0x2E43B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E43B4u;
            // 0x2e43b8: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E43D0u;
            goto label_2e43d0;
        }
    }
    ctx->pc = 0x2E43BCu;
    // 0x2e43bc: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x2e43bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
    // 0x2e43c0: 0x8e05004c  lw          $a1, 0x4C($s0)
    ctx->pc = 0x2e43c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x2e43c4: 0xc0b81ea  jal         func_2E07A8
    ctx->pc = 0x2E43C4u;
    SET_GPR_U32(ctx, 31, 0x2E43CCu);
    ctx->pc = 0x2E43C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E43C4u;
    // 0x2e43c8: 0x24848338  addiu       $a0, $a0, -0x7CC8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E07A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E07A8u, 0x2E43C4u, 0x2E43CCu)) {
        return;
    }
    ctx->pc = 0x2E43CCu;
label_2e43cc:
    // 0x2e43cc: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2e43ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2e43d0:
    // 0x2e43d0: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2e43d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2e43d4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E43D4u;
    {
        const bool branch_taken_0x2e43d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E43D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E43D4u;
        // 0x2e43d8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e43d4) {
            ctx->pc = 0x2E43E8u;
            goto label_2e43e8;
        }
    }
    ctx->pc = 0x2E43DCu;
    // 0x2e43dc: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x2e43dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
    // 0x2e43e0: 0xc0b81ea  jal         func_2E07A8
    ctx->pc = 0x2E43E0u;
    SET_GPR_U32(ctx, 31, 0x2E43E8u);
    ctx->pc = 0x2E43E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E43E0u;
    // 0x2e43e4: 0x24848310  addiu       $a0, $a0, -0x7CF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E07A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E07A8u, 0x2E43E0u, 0x2E43E8u)) {
        return;
    }
    ctx->pc = 0x2E43E8u;
label_2e43e8:
    // 0x2e43e8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2e43e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e43ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e43ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e43f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2E43F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E43F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E43F0u;
        // 0x2e43f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E43F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E43F8u;
}
