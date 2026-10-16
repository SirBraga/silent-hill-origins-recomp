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

// Function: sub_002F6298
// Address: 0x2f6298 - 0x2f6418
void sub_002F6298_0x2f6298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F6298_0x2f6298");
#endif

    switch (ctx->pc) {
        case 0x2f62c8u: goto label_2f62c8;
        case 0x2f62e4u: goto label_2f62e4;
        case 0x2f62f8u: goto label_2f62f8;
        case 0x2f630cu: goto label_2f630c;
        case 0x2f6318u: goto label_2f6318;
        case 0x2f6324u: goto label_2f6324;
        case 0x2f632cu: goto label_2f632c;
        case 0x2f6348u: goto label_2f6348;
        case 0x2f6378u: goto label_2f6378;
        case 0x2f63a0u: goto label_2f63a0;
        case 0x2f63bcu: goto label_2f63bc;
        case 0x2f63d0u: goto label_2f63d0;
        case 0x2f63e0u: goto label_2f63e0;
        default: break;
    }

    ctx->pc = 0x2f6298u;

    // 0x2f6298: 0x27bdfc80  addiu       $sp, $sp, -0x380
    ctx->pc = 0x2f6298u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966400));
    // 0x2f629c: 0xffb40350  sd          $s4, 0x350($sp)
    ctx->pc = 0x2f629cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 848), GPR_U64(ctx, 20));
    // 0x2f62a0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2f62a0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f62a4: 0xffb10320  sd          $s1, 0x320($sp)
    ctx->pc = 0x2f62a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 800), GPR_U64(ctx, 17));
    // 0x2f62a8: 0xffb00310  sd          $s0, 0x310($sp)
    ctx->pc = 0x2f62a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 784), GPR_U64(ctx, 16));
    // 0x2f62ac: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2f62acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f62b0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2f62b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f62b4: 0xffbf0370  sd          $ra, 0x370($sp)
    ctx->pc = 0x2f62b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 880), GPR_U64(ctx, 31));
    // 0x2f62b8: 0xffb50360  sd          $s5, 0x360($sp)
    ctx->pc = 0x2f62b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 864), GPR_U64(ctx, 21));
    // 0x2f62bc: 0xffb30340  sd          $s3, 0x340($sp)
    ctx->pc = 0x2f62bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 832), GPR_U64(ctx, 19));
    // 0x2f62c0: 0xc0bce62  jal         func_2F3988
    ctx->pc = 0x2F62C0u;
    SET_GPR_U32(ctx, 31, 0x2F62C8u);
    ctx->pc = 0x2F62C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F62C0u;
    // 0x2f62c4: 0xffb20330  sd          $s2, 0x330($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 816), GPR_U64(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3988u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F3988u, 0x2F62C0u, 0x2F62C8u)) {
        return;
    }
    ctx->pc = 0x2F62C8u;
label_2f62c8:
    // 0x2f62c8: 0x1440004a  bnez        $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x2F62C8u;
    {
        const bool branch_taken_0x2f62c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F62CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F62C8u;
        // 0x2f62cc: 0xdfbf0370  ld          $ra, 0x370($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 880)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f62c8) {
            ctx->pc = 0x2F63F4u;
            goto label_2f63f4;
        }
    }
    ctx->pc = 0x2F62D0u;
    // 0x2f62d0: 0x27b50200  addiu       $s5, $sp, 0x200
    ctx->pc = 0x2f62d0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x2f62d4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2f62d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f62d8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2f62d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f62dc: 0xc0bce8c  jal         func_2F3A30
    ctx->pc = 0x2F62DCu;
    SET_GPR_U32(ctx, 31, 0x2F62E4u);
    ctx->pc = 0x2F62E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F62DCu;
    // 0x2f62e0: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3A30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F3A30u, 0x2F62DCu, 0x2F62E4u)) {
        return;
    }
    ctx->pc = 0x2F62E4u;
label_2f62e4:
    // 0x2f62e4: 0x14400043  bnez        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x2F62E4u;
    {
        const bool branch_taken_0x2f62e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F62E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F62E4u;
        // 0x2f62e8: 0xdfbf0370  ld          $ra, 0x370($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 880)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f62e4) {
            ctx->pc = 0x2F63F4u;
            goto label_2f63f4;
        }
    }
    ctx->pc = 0x2F62ECu;
    // 0x2f62ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f62ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f62f0: 0xc0c49b7  jal         func_3126DC
    ctx->pc = 0x2F62F0u;
    SET_GPR_U32(ctx, 31, 0x2F62F8u);
    ctx->pc = 0x2F62F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F62F0u;
    // 0x2f62f4: 0x2405002f  addiu       $a1, $zero, 0x2F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3126DCu;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3126DCu, 0x2F62F0u, 0x2F62F8u)) {
        return;
    }
    ctx->pc = 0x2F62F8u;
label_2f62f8:
    // 0x2f62f8: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2F62F8u;
    {
        const bool branch_taken_0x2f62f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F62FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F62F8u;
        // 0x2f62fc: 0x27b00280  addiu       $s0, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f62f8) {
            ctx->pc = 0x2F6334u;
            goto label_2f6334;
        }
    }
    ctx->pc = 0x2F6300u;
    // 0x2f6300: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2f6300u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6304: 0xc0c4a72  jal         func_3129C8
    ctx->pc = 0x2F6304u;
    SET_GPR_U32(ctx, 31, 0x2F630Cu);
    ctx->pc = 0x2F6308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6304u;
    // 0x2f6308: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3129C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3129C8u, 0x2F6304u, 0x2F630Cu)) {
        return;
    }
    ctx->pc = 0x2F630Cu;
label_2f630c:
    // 0x2f630c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f630cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6310: 0xc0c5d08  jal         func_317420
    ctx->pc = 0x2F6310u;
    SET_GPR_U32(ctx, 31, 0x2F6318u);
    ctx->pc = 0x2F6314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6310u;
    // 0x2f6314: 0x2405002f  addiu       $a1, $zero, 0x2F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    ctx->in_delay_slot = false;
    ctx->pc = 0x317420u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x317420u, 0x2F6310u, 0x2F6318u)) {
        return;
    }
    ctx->pc = 0x2F6318u;
label_2f6318:
    // 0x2f6318: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x2f6318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2f631c: 0xc0c4a72  jal         func_3129C8
    ctx->pc = 0x2F631Cu;
    SET_GPR_U32(ctx, 31, 0x2F6324u);
    ctx->pc = 0x2F6320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F631Cu;
    // 0x2f6320: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3129C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3129C8u, 0x2F631Cu, 0x2F6324u)) {
        return;
    }
    ctx->pc = 0x2F6324u;
label_2f6324:
    // 0x2f6324: 0xc0bc744  jal         func_2F1D10
    ctx->pc = 0x2F6324u;
    SET_GPR_U32(ctx, 31, 0x2F632Cu);
    ctx->pc = 0x2F6328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6324u;
    // 0x2f6328: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1D10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F1D10u, 0x2F6324u, 0x2F632Cu)) {
        return;
    }
    ctx->pc = 0x2F632Cu;
label_2f632c:
    // 0x2f632c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F632Cu;
    {
        const bool branch_taken_0x2f632c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f632c) {
            ctx->pc = 0x2F6340u;
            goto label_2f6340;
        }
    }
    ctx->pc = 0x2F6334u;
label_2f6334:
    // 0x2f6334: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x2f6334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x2f6338: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x2F6338u;
    {
        const bool branch_taken_0x2f6338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F633Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6338u;
        // 0x2f633c: 0x34420016  ori         $v0, $v0, 0x16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6338) {
            ctx->pc = 0x2F63F0u;
            goto label_2f63f0;
        }
    }
    ctx->pc = 0x2F6340u;
label_2f6340:
    // 0x2f6340: 0xc0bc728  jal         func_2F1CA0
    ctx->pc = 0x2F6340u;
    SET_GPR_U32(ctx, 31, 0x2F6348u);
    ctx->pc = 0x2F6344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6340u;
    // 0x2f6344: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1CA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F1CA0u, 0x2F6340u, 0x2F6348u)) {
        return;
    }
    ctx->pc = 0x2F6348u;
label_2f6348:
    // 0x2f6348: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F6348u;
    {
        const bool branch_taken_0x2f6348 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F634Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6348u;
        // 0x2f634c: 0x27b20300  addiu       $s2, $sp, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6348) {
            ctx->pc = 0x2F635Cu;
            goto label_2f635c;
        }
    }
    ctx->pc = 0x2F6350u;
    // 0x2f6350: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x2f6350u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x2f6354: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x2F6354u;
    {
        const bool branch_taken_0x2f6354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6354u;
        // 0x2f6358: 0x3442005b  ori         $v0, $v0, 0x5B (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)91);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6354) {
            ctx->pc = 0x2F63F0u;
            goto label_2f63f0;
        }
    }
    ctx->pc = 0x2F635Cu;
label_2f635c:
    // 0x2f635c: 0x27b30304  addiu       $s3, $sp, 0x304
    ctx->pc = 0x2f635cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 772));
    // 0x2f6360: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2f6360u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6364: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2f6364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6368: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2f6368u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f636c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2f636cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6370: 0xc0bcf42  jal         func_2F3D08
    ctx->pc = 0x2F6370u;
    SET_GPR_U32(ctx, 31, 0x2F6378u);
    ctx->pc = 0x2F6374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6370u;
    // 0x2f6374: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3D08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F3D08u, 0x2F6370u, 0x2F6378u)) {
        return;
    }
    ctx->pc = 0x2F6378u;
label_2f6378:
    // 0x2f6378: 0x3c038101  lui         $v1, 0x8101
    ctx->pc = 0x2f6378u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33025 << 16));
    // 0x2f637c: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x2f637cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x2f6380: 0x1443001c  bne         $v0, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x2F6380u;
    {
        const bool branch_taken_0x2f6380 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2F6384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6380u;
        // 0x2f6384: 0xdfbf0370  ld          $ra, 0x370($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 880)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6380) {
            ctx->pc = 0x2F63F4u;
            goto label_2f63f4;
        }
    }
    ctx->pc = 0x2F6388u;
    // 0x2f6388: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2f6388u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f638c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2f638cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6390: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x2f6390u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6394: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2f6394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6398: 0xc0bcf42  jal         func_2F3D08
    ctx->pc = 0x2F6398u;
    SET_GPR_U32(ctx, 31, 0x2F63A0u);
    ctx->pc = 0x2F639Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6398u;
    // 0x2f639c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3D08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F3D08u, 0x2F6398u, 0x2F63A0u)) {
        return;
    }
    ctx->pc = 0x2F63A0u;
label_2f63a0:
    // 0x2f63a0: 0x3c038101  lui         $v1, 0x8101
    ctx->pc = 0x2f63a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33025 << 16));
    // 0x2f63a4: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2f63a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2f63a8: 0x14430012  bne         $v0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2F63A8u;
    {
        const bool branch_taken_0x2f63a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2F63ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F63A8u;
        // 0x2f63ac: 0xdfbf0370  ld          $ra, 0x370($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 880)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f63a8) {
            ctx->pc = 0x2F63F4u;
            goto label_2f63f4;
        }
    }
    ctx->pc = 0x2F63B0u;
    // 0x2f63b0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2f63b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f63b4: 0xc0c4a72  jal         func_3129C8
    ctx->pc = 0x2F63B4u;
    SET_GPR_U32(ctx, 31, 0x2F63BCu);
    ctx->pc = 0x2F63B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F63B4u;
    // 0x2f63b8: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3129C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3129C8u, 0x2F63B4u, 0x2F63BCu)) {
        return;
    }
    ctx->pc = 0x2F63BCu;
label_2f63bc:
    // 0x2f63bc: 0x8fa60300  lw          $a2, 0x300($sp)
    ctx->pc = 0x2f63bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x2f63c0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2f63c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f63c4: 0x8fa70304  lw          $a3, 0x304($sp)
    ctx->pc = 0x2f63c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 772)));
    // 0x2f63c8: 0xc0bd056  jal         func_2F4158
    ctx->pc = 0x2F63C8u;
    SET_GPR_U32(ctx, 31, 0x2F63D0u);
    ctx->pc = 0x2F63CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F63C8u;
    // 0x2f63cc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4158u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F4158u, 0x2F63C8u, 0x2F63D0u)) {
        return;
    }
    ctx->pc = 0x2F63D0u;
label_2f63d0:
    // 0x2f63d0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2F63D0u;
    {
        const bool branch_taken_0x2f63d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F63D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F63D0u;
        // 0x2f63d4: 0xdfbf0370  ld          $ra, 0x370($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 880)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f63d0) {
            ctx->pc = 0x2F63F4u;
            goto label_2f63f4;
        }
    }
    ctx->pc = 0x2F63D8u;
    // 0x2f63d8: 0xc0bda0c  jal         func_2F6830
    ctx->pc = 0x2F63D8u;
    SET_GPR_U32(ctx, 31, 0x2F63E0u);
    ctx->pc = 0x2F63DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F63D8u;
    // 0x2f63dc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6830u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F6830u, 0x2F63D8u, 0x2F63E0u)) {
        return;
    }
    ctx->pc = 0x2F63E0u;
label_2f63e0:
    // 0x2f63e0: 0x3c038101  lui         $v1, 0x8101
    ctx->pc = 0x2f63e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33025 << 16));
    // 0x2f63e4: 0x3463006f  ori         $v1, $v1, 0x6F
    ctx->pc = 0x2f63e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)111);
    // 0x2f63e8: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x2f63e8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0));
    // 0x2f63ec: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2f63ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2f63f0:
    // 0x2f63f0: 0xdfbf0370  ld          $ra, 0x370($sp)
    ctx->pc = 0x2f63f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 880)));
label_2f63f4:
    // 0x2f63f4: 0xdfb50360  ld          $s5, 0x360($sp)
    ctx->pc = 0x2f63f4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 864)));
    // 0x2f63f8: 0xdfb40350  ld          $s4, 0x350($sp)
    ctx->pc = 0x2f63f8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 848)));
    // 0x2f63fc: 0xdfb30340  ld          $s3, 0x340($sp)
    ctx->pc = 0x2f63fcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 832)));
    // 0x2f6400: 0xdfb20330  ld          $s2, 0x330($sp)
    ctx->pc = 0x2f6400u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 816)));
    // 0x2f6404: 0xdfb10320  ld          $s1, 0x320($sp)
    ctx->pc = 0x2f6404u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x2f6408: 0xdfb00310  ld          $s0, 0x310($sp)
    ctx->pc = 0x2f6408u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 784)));
    // 0x2f640c: 0x3e00008  jr          $ra
    ctx->pc = 0x2F640Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F6410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F640Cu;
        // 0x2f6410: 0x27bd0380  addiu       $sp, $sp, 0x380 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 896));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F640Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F6414u;
    // 0x2f6414: 0x0  nop
    ctx->pc = 0x2f6414u;
    // NOP
    ctx->pc = 0x2f6418u;
}
