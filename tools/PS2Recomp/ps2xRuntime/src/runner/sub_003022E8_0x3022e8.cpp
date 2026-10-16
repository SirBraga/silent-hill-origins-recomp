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

// Function: sub_003022E8
// Address: 0x3022e8 - 0x3023d0
void sub_003022E8_0x3022e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003022E8_0x3022e8");
#endif

    switch (ctx->pc) {
        case 0x302300u: goto label_302300;
        case 0x302310u: goto label_302310;
        case 0x302334u: goto label_302334;
        case 0x302340u: goto label_302340;
        case 0x302350u: goto label_302350;
        case 0x302378u: goto label_302378;
        case 0x302384u: goto label_302384;
        case 0x302398u: goto label_302398;
        case 0x3023a4u: goto label_3023a4;
        default: break;
    }

    ctx->pc = 0x3022e8u;

    // 0x3022e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3022e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3022ec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3022ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3022f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3022f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3022f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3022f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3022f8: 0xc0c0122  jal         func_300488
    ctx->pc = 0x3022F8u;
    SET_GPR_U32(ctx, 31, 0x302300u);
    ctx->pc = 0x3022FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3022F8u;
    // 0x3022fc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300488u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x300488u, 0x3022F8u, 0x302300u)) {
        return;
    }
    ctx->pc = 0x302300u;
label_302300:
    // 0x302300: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x302300u;
    {
        const bool branch_taken_0x302300 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x302304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302300u;
        // 0x302304: 0xae020850  sw          $v0, 0x850($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302300) {
            ctx->pc = 0x302334u;
            goto label_302334;
        }
    }
    ctx->pc = 0x302308u;
    // 0x302308: 0xc0c09f2  jal         func_3027C8
    ctx->pc = 0x302308u;
    SET_GPR_U32(ctx, 31, 0x302310u);
    ctx->pc = 0x30230Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302308u;
    // 0x30230c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3027C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3027C8u, 0x302308u, 0x302310u)) {
        return;
    }
    ctx->pc = 0x302310u;
label_302310:
    // 0x302310: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x302310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x302314: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x302314u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x302318: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x302318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x30231c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x30231cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x302320: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x302320u;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 3)); // MMIO: 0x10002000
    // 0x302324: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x302324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302328: 0xae03082c  sw          $v1, 0x82C($s0)
    ctx->pc = 0x302328u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 3));
    // 0x30232c: 0xc0c09f2  jal         func_3027C8
    ctx->pc = 0x30232Cu;
    SET_GPR_U32(ctx, 31, 0x302334u);
    ctx->pc = 0x302330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30232Cu;
    // 0x302330: 0xae050828  sw          $a1, 0x828($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 2088), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3027C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3027C8u, 0x30232Cu, 0x302334u)) {
        return;
    }
    ctx->pc = 0x302334u;
label_302334:
    // 0x302334: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x302334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302338: 0xc0c0122  jal         func_300488
    ctx->pc = 0x302338u;
    SET_GPR_U32(ctx, 31, 0x302340u);
    ctx->pc = 0x30233Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302338u;
    // 0x30233c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300488u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x300488u, 0x302338u, 0x302340u)) {
        return;
    }
    ctx->pc = 0x302340u;
label_302340:
    // 0x302340: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x302340u;
    {
        const bool branch_taken_0x302340 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x302344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302340u;
        // 0x302344: 0xae020854  sw          $v0, 0x854($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302340) {
            ctx->pc = 0x302378u;
            goto label_302378;
        }
    }
    ctx->pc = 0x302348u;
    // 0x302348: 0xc0c09f2  jal         func_3027C8
    ctx->pc = 0x302348u;
    SET_GPR_U32(ctx, 31, 0x302350u);
    ctx->pc = 0x30234Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302348u;
    // 0x30234c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3027C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3027C8u, 0x302348u, 0x302350u)) {
        return;
    }
    ctx->pc = 0x302350u;
label_302350:
    // 0x302350: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x302350u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x302354: 0x3c035800  lui         $v1, 0x5800
    ctx->pc = 0x302354u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)22528 << 16));
    // 0x302358: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x302358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x30235c: 0x3c045000  lui         $a0, 0x5000
    ctx->pc = 0x30235cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20480 << 16));
    // 0x302360: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x302360u;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 3)); // MMIO: 0x10002000
    // 0x302364: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x302364u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x302368: 0xae04082c  sw          $a0, 0x82C($s0)
    ctx->pc = 0x302368u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 4));
    // 0x30236c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30236cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302370: 0xc0c09f2  jal         func_3027C8
    ctx->pc = 0x302370u;
    SET_GPR_U32(ctx, 31, 0x302378u);
    ctx->pc = 0x302374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302370u;
    // 0x302374: 0xae050828  sw          $a1, 0x828($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 2088), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3027C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3027C8u, 0x302370u, 0x302378u)) {
        return;
    }
    ctx->pc = 0x302378u;
label_302378:
    // 0x302378: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x302378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30237c: 0xc0c0122  jal         func_300488
    ctx->pc = 0x30237Cu;
    SET_GPR_U32(ctx, 31, 0x302384u);
    ctx->pc = 0x302380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30237Cu;
    // 0x302380: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300488u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x300488u, 0x30237Cu, 0x302384u)) {
        return;
    }
    ctx->pc = 0x302384u;
label_302384:
    // 0x302384: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x302384u;
    {
        const bool branch_taken_0x302384 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x302388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302384u;
        // 0x302388: 0x3c05006b  lui         $a1, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302384) {
            ctx->pc = 0x302398u;
            goto label_302398;
        }
    }
    ctx->pc = 0x30238Cu;
    // 0x30238c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30238cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302390: 0xc0bf75c  jal         func_2FDD70
    ctx->pc = 0x302390u;
    SET_GPR_U32(ctx, 31, 0x302398u);
    ctx->pc = 0x302394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302390u;
    // 0x302394: 0x24a509c8  addiu       $a1, $a1, 0x9C8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2504));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDD70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2FDD70u, 0x302390u, 0x302398u)) {
        return;
    }
    ctx->pc = 0x302398u;
label_302398:
    // 0x302398: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x302398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30239c: 0xc0c0122  jal         func_300488
    ctx->pc = 0x30239Cu;
    SET_GPR_U32(ctx, 31, 0x3023A4u);
    ctx->pc = 0x3023A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30239Cu;
    // 0x3023a0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300488u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x300488u, 0x30239Cu, 0x3023A4u)) {
        return;
    }
    ctx->pc = 0x3023A4u;
label_3023a4:
    // 0x3023a4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3023A4u;
    {
        const bool branch_taken_0x3023a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3023A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3023A4u;
        // 0x3023a8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3023a4) {
            ctx->pc = 0x3023C4u;
            goto label_3023c4;
        }
    }
    ctx->pc = 0x3023ACu;
    // 0x3023ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3023acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3023b0: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x3023b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x3023b4: 0x24a509f0  addiu       $a1, $a1, 0x9F0
    ctx->pc = 0x3023b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2544));
    // 0x3023b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3023b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3023bc: 0x80bf75c  j           func_2FDD70
    ctx->pc = 0x3023BCu;
    ctx->pc = 0x3023C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3023BCu;
    // 0x3023c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDD70u;
    sub_002FDD70_0x2fdd70(rdram, ctx, runtime); return;
    ctx->pc = 0x3023C4u;
label_3023c4:
    // 0x3023c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3023c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3023c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3023C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3023CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3023C8u;
        // 0x3023cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3023C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3023D0u;
}
