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

// Function: sub_001EC378
// Address: 0x1ec378 - 0x1ec4e8
void sub_001EC378_0x1ec378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EC378_0x1ec378");
#endif

    switch (ctx->pc) {
        case 0x1ec378u: goto label_1ec378;
        case 0x1ec37cu: goto label_1ec37c;
        case 0x1ec380u: goto label_1ec380;
        case 0x1ec384u: goto label_1ec384;
        case 0x1ec388u: goto label_1ec388;
        case 0x1ec38cu: goto label_1ec38c;
        case 0x1ec390u: goto label_1ec390;
        case 0x1ec394u: goto label_1ec394;
        case 0x1ec398u: goto label_1ec398;
        case 0x1ec39cu: goto label_1ec39c;
        case 0x1ec3a0u: goto label_1ec3a0;
        case 0x1ec3a4u: goto label_1ec3a4;
        case 0x1ec3a8u: goto label_1ec3a8;
        case 0x1ec3acu: goto label_1ec3ac;
        case 0x1ec3b0u: goto label_1ec3b0;
        case 0x1ec3b4u: goto label_1ec3b4;
        case 0x1ec3b8u: goto label_1ec3b8;
        case 0x1ec3bcu: goto label_1ec3bc;
        case 0x1ec3c0u: goto label_1ec3c0;
        case 0x1ec3c4u: goto label_1ec3c4;
        case 0x1ec3c8u: goto label_1ec3c8;
        case 0x1ec3ccu: goto label_1ec3cc;
        case 0x1ec3d0u: goto label_1ec3d0;
        case 0x1ec3d4u: goto label_1ec3d4;
        case 0x1ec3d8u: goto label_1ec3d8;
        case 0x1ec3dcu: goto label_1ec3dc;
        case 0x1ec3e0u: goto label_1ec3e0;
        case 0x1ec3e4u: goto label_1ec3e4;
        case 0x1ec3e8u: goto label_1ec3e8;
        case 0x1ec3ecu: goto label_1ec3ec;
        case 0x1ec3f0u: goto label_1ec3f0;
        case 0x1ec3f4u: goto label_1ec3f4;
        case 0x1ec3f8u: goto label_1ec3f8;
        case 0x1ec3fcu: goto label_1ec3fc;
        case 0x1ec400u: goto label_1ec400;
        case 0x1ec404u: goto label_1ec404;
        case 0x1ec408u: goto label_1ec408;
        case 0x1ec40cu: goto label_1ec40c;
        case 0x1ec410u: goto label_1ec410;
        case 0x1ec414u: goto label_1ec414;
        case 0x1ec418u: goto label_1ec418;
        case 0x1ec41cu: goto label_1ec41c;
        case 0x1ec420u: goto label_1ec420;
        case 0x1ec424u: goto label_1ec424;
        case 0x1ec428u: goto label_1ec428;
        case 0x1ec42cu: goto label_1ec42c;
        case 0x1ec430u: goto label_1ec430;
        case 0x1ec434u: goto label_1ec434;
        case 0x1ec438u: goto label_1ec438;
        case 0x1ec43cu: goto label_1ec43c;
        case 0x1ec440u: goto label_1ec440;
        case 0x1ec444u: goto label_1ec444;
        case 0x1ec448u: goto label_1ec448;
        case 0x1ec44cu: goto label_1ec44c;
        case 0x1ec450u: goto label_1ec450;
        case 0x1ec454u: goto label_1ec454;
        case 0x1ec458u: goto label_1ec458;
        case 0x1ec45cu: goto label_1ec45c;
        case 0x1ec460u: goto label_1ec460;
        case 0x1ec464u: goto label_1ec464;
        case 0x1ec468u: goto label_1ec468;
        case 0x1ec46cu: goto label_1ec46c;
        case 0x1ec470u: goto label_1ec470;
        case 0x1ec474u: goto label_1ec474;
        case 0x1ec478u: goto label_1ec478;
        case 0x1ec47cu: goto label_1ec47c;
        case 0x1ec480u: goto label_1ec480;
        case 0x1ec484u: goto label_1ec484;
        case 0x1ec488u: goto label_1ec488;
        case 0x1ec48cu: goto label_1ec48c;
        case 0x1ec490u: goto label_1ec490;
        case 0x1ec494u: goto label_1ec494;
        case 0x1ec498u: goto label_1ec498;
        case 0x1ec49cu: goto label_1ec49c;
        case 0x1ec4a0u: goto label_1ec4a0;
        case 0x1ec4a4u: goto label_1ec4a4;
        case 0x1ec4a8u: goto label_1ec4a8;
        case 0x1ec4acu: goto label_1ec4ac;
        case 0x1ec4b0u: goto label_1ec4b0;
        case 0x1ec4b4u: goto label_1ec4b4;
        case 0x1ec4b8u: goto label_1ec4b8;
        case 0x1ec4bcu: goto label_1ec4bc;
        case 0x1ec4c0u: goto label_1ec4c0;
        case 0x1ec4c4u: goto label_1ec4c4;
        case 0x1ec4c8u: goto label_1ec4c8;
        case 0x1ec4ccu: goto label_1ec4cc;
        case 0x1ec4d0u: goto label_1ec4d0;
        case 0x1ec4d4u: goto label_1ec4d4;
        case 0x1ec4d8u: goto label_1ec4d8;
        case 0x1ec4dcu: goto label_1ec4dc;
        case 0x1ec4e0u: goto label_1ec4e0;
        case 0x1ec4e4u: goto label_1ec4e4;
        default: break;
    }

    ctx->pc = 0x1ec378u;

label_1ec378:
    // 0x1ec378: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1ec378u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1ec37c:
    // 0x1ec37c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1ec37cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1ec380:
    // 0x1ec380: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1ec380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_1ec384:
    // 0x1ec384: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1ec384u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ec388:
    // 0x1ec388: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1ec388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_1ec38c:
    // 0x1ec38c: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1ec38cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1ec390:
    // 0x1ec390: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1ec390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_1ec394:
    // 0x1ec394: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1ec394u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1ec398:
    // 0x1ec398: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x1ec398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_1ec39c:
    // 0x1ec39c: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x1ec39cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1ec3a0:
    // 0x1ec3a0: 0x10800048  beqz        $a0, . + 4 + (0x48 << 2)
label_1ec3a4:
    if (ctx->pc == 0x1EC3A4u) {
        ctx->pc = 0x1EC3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC3A0u;
        // 0x1ec3a4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC3A8u;
        goto label_1ec3a8;
    }
    ctx->pc = 0x1EC3A0u;
    {
        const bool branch_taken_0x1ec3a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC3A0u;
        // 0x1ec3a4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec3a0) {
            ctx->pc = 0x1EC4C4u;
            goto label_1ec4c4;
        }
    }
    ctx->pc = 0x1EC3A8u;
label_1ec3a8:
    // 0x1ec3a8: 0x12200047  beqz        $s1, . + 4 + (0x47 << 2)
label_1ec3ac:
    if (ctx->pc == 0x1EC3ACu) {
        ctx->pc = 0x1EC3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC3A8u;
        // 0x1ec3ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC3B0u;
        goto label_1ec3b0;
    }
    ctx->pc = 0x1EC3A8u;
    {
        const bool branch_taken_0x1ec3a8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC3A8u;
        // 0x1ec3ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec3a8) {
            ctx->pc = 0x1EC4C8u;
            goto label_1ec4c8;
        }
    }
    ctx->pc = 0x1EC3B0u;
label_1ec3b0:
    // 0x1ec3b0: 0x12000045  beqz        $s0, . + 4 + (0x45 << 2)
label_1ec3b4:
    if (ctx->pc == 0x1EC3B4u) {
        ctx->pc = 0x1EC3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC3B0u;
        // 0x1ec3b4: 0x3c05006a  lui         $a1, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC3B8u;
        goto label_1ec3b8;
    }
    ctx->pc = 0x1EC3B0u;
    {
        const bool branch_taken_0x1ec3b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC3B0u;
        // 0x1ec3b4: 0x3c05006a  lui         $a1, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec3b0) {
            ctx->pc = 0x1EC4C8u;
            goto label_1ec4c8;
        }
    }
    ctx->pc = 0x1EC3B8u;
label_1ec3b8:
    // 0x1ec3b8: 0xc0bbac2  jal         func_2EEB08
label_1ec3bc:
    if (ctx->pc == 0x1EC3BCu) {
        ctx->pc = 0x1EC3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC3B8u;
        // 0x1ec3bc: 0x24a51d50  addiu       $a1, $a1, 0x1D50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7504));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC3C0u;
        goto label_1ec3c0;
    }
    ctx->pc = 0x1EC3B8u;
    SET_GPR_U32(ctx, 31, 0x1EC3C0u);
    ctx->pc = 0x1EC3BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC3B8u;
    // 0x1ec3bc: 0x24a51d50  addiu       $a1, $a1, 0x1D50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7504));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2EEB08u, 0x1EC3B8u, 0x1EC3C0u)) {
        return;
    }
    ctx->pc = 0x1EC3C0u;
label_1ec3c0:
    // 0x1ec3c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ec3c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ec3c4:
    // 0x1ec3c4: 0x1080003f  beqz        $a0, . + 4 + (0x3F << 2)
label_1ec3c8:
    if (ctx->pc == 0x1EC3C8u) {
        ctx->pc = 0x1EC3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC3C4u;
        // 0x1ec3c8: 0x121880  sll         $v1, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC3CCu;
        goto label_1ec3cc;
    }
    ctx->pc = 0x1EC3C4u;
    {
        const bool branch_taken_0x1ec3c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC3C4u;
        // 0x1ec3c8: 0x121880  sll         $v1, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec3c4) {
            ctx->pc = 0x1EC4C4u;
            goto label_1ec4c4;
        }
    }
    ctx->pc = 0x1EC3CCu;
label_1ec3cc:
    // 0x1ec3cc: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x1ec3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_1ec3d0:
    // 0x1ec3d0: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x1ec3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
label_1ec3d4:
    // 0x1ec3d4: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x1ec3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1ec3d8:
    // 0x1ec3d8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1ec3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1ec3dc:
    // 0x1ec3dc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1ec3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1ec3e0:
    // 0x1ec3e0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1ec3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1ec3e4:
    // 0x1ec3e4: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x1ec3e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_1ec3e8:
    // 0x1ec3e8: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
label_1ec3ec:
    if (ctx->pc == 0x1EC3ECu) {
        ctx->pc = 0x1EC3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC3E8u;
        // 0x1ec3ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC3F0u;
        goto label_1ec3f0;
    }
    ctx->pc = 0x1EC3E8u;
    {
        const bool branch_taken_0x1ec3e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC3E8u;
        // 0x1ec3ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec3e8) {
            ctx->pc = 0x1EC4C8u;
            goto label_1ec4c8;
        }
    }
    ctx->pc = 0x1EC3F0u;
label_1ec3f0:
    // 0x1ec3f0: 0x8c710028  lw          $s1, 0x28($v1)
    ctx->pc = 0x1ec3f0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_1ec3f4:
    // 0x1ec3f4: 0x8e320000  lw          $s2, 0x0($s1)
    ctx->pc = 0x1ec3f4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1ec3f8:
    // 0x1ec3f8: 0x8e330004  lw          $s3, 0x4($s1)
    ctx->pc = 0x1ec3f8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1ec3fc:
    // 0x1ec3fc: 0xc0932d4  jal         func_24CB50
label_1ec400:
    if (ctx->pc == 0x1EC400u) {
        ctx->pc = 0x1EC400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC3FCu;
        // 0x1ec400: 0x8e340008  lw          $s4, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC404u;
        goto label_1ec404;
    }
    ctx->pc = 0x1EC3FCu;
    SET_GPR_U32(ctx, 31, 0x1EC404u);
    ctx->pc = 0x1EC400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC3FCu;
    // 0x1ec400: 0x8e340008  lw          $s4, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24CB50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24CB50u, 0x1EC3FCu, 0x1EC404u)) {
        return;
    }
    ctx->pc = 0x1EC404u;
label_1ec404:
    // 0x1ec404: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1ec404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1ec408:
    // 0x1ec408: 0x24040134  addiu       $a0, $zero, 0x134
    ctx->pc = 0x1ec408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 308));
label_1ec40c:
    // 0x1ec40c: 0x40f809  jalr        $v0
label_1ec410:
    if (ctx->pc == 0x1EC410u) {
        ctx->pc = 0x1EC410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC40Cu;
        // 0x1ec410: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC414u;
        goto label_1ec414;
    }
    ctx->pc = 0x1EC40Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EC414u);
        ctx->pc = 0x1EC410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC40Cu;
        // 0x1ec410: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EC40Cu, 0x1EC414u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EC414u;
label_1ec414:
    // 0x1ec414: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ec414u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ec418:
    // 0x1ec418: 0x5200001a  beql        $s0, $zero, . + 4 + (0x1A << 2)
label_1ec41c:
    if (ctx->pc == 0x1EC41Cu) {
        ctx->pc = 0x1EC41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC418u;
        // 0x1ec41c: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC420u;
        goto label_1ec420;
    }
    ctx->pc = 0x1EC418u;
    {
        const bool branch_taken_0x1ec418 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ec418) {
            ctx->pc = 0x1EC41Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EC418u;
            // 0x1ec41c: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EC484u;
            goto label_1ec484;
        }
    }
    ctx->pc = 0x1EC420u;
label_1ec420:
    // 0x1ec420: 0xae120004  sw          $s2, 0x4($s0)
    ctx->pc = 0x1ec420u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 18));
label_1ec424:
    // 0x1ec424: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1ec424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1ec428:
    // 0x1ec428: 0xae130008  sw          $s3, 0x8($s0)
    ctx->pc = 0x1ec428u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 19));
label_1ec42c:
    // 0x1ec42c: 0x2602012b  addiu       $v0, $s0, 0x12B
    ctx->pc = 0x1ec42cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 299));
label_1ec430:
    // 0x1ec430: 0xae14000c  sw          $s4, 0xC($s0)
    ctx->pc = 0x1ec430u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 20));
label_1ec434:
    // 0x1ec434: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1ec434u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_1ec438:
    // 0x1ec438: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x1ec438u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
label_1ec43c:
    // 0x1ec43c: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x1ec43cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_1ec440:
    // 0x1ec440: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x1ec440u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_1ec444:
    // 0x1ec444: 0xae00012c  sw          $zero, 0x12C($s0)
    ctx->pc = 0x1ec444u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 0));
label_1ec448:
    // 0x1ec448: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1ec448u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
label_1ec44c:
    // 0x1ec44c: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x1ec44cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
label_1ec450:
    // 0x1ec450: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x1ec450u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
label_1ec454:
    // 0x1ec454: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x1ec454u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
label_1ec458:
    // 0x1ec458: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x1ec458u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
label_1ec45c:
    // 0x1ec45c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1ec45cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1ec460:
    // 0x1ec460: 0x0  nop
    ctx->pc = 0x1ec460u;
    // NOP
label_1ec464:
    // 0x1ec464: 0x0  nop
    ctx->pc = 0x1ec464u;
    // NOP
label_1ec468:
    // 0x1ec468: 0x461fffb  bgez        $v1, . + 4 + (-0x5 << 2)
label_1ec46c:
    if (ctx->pc == 0x1EC46Cu) {
        ctx->pc = 0x1EC46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC468u;
        // 0x1ec46c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC470u;
        goto label_1ec470;
    }
    ctx->pc = 0x1EC468u;
    {
        const bool branch_taken_0x1ec468 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x1EC46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC468u;
        // 0x1ec46c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec468) {
            ctx->pc = 0x1EC458u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ec458;
        }
    }
    ctx->pc = 0x1EC470u;
label_1ec470:
    // 0x1ec470: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ec470u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1ec474:
    // 0x1ec474: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ec474u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ec478:
    // 0x1ec478: 0x0  nop
    ctx->pc = 0x1ec478u;
    // NOP
label_1ec47c:
    // 0x1ec47c: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x1ec47cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
label_1ec480:
    // 0x1ec480: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x1ec480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1ec484:
    // 0x1ec484: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_1ec488:
    if (ctx->pc == 0x1EC488u) {
        ctx->pc = 0x1EC488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC484u;
        // 0x1ec488: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC48Cu;
        goto label_1ec48c;
    }
    ctx->pc = 0x1EC484u;
    {
        const bool branch_taken_0x1ec484 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ec484) {
            ctx->pc = 0x1EC488u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EC484u;
            // 0x1ec488: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EC49Cu;
            goto label_1ec49c;
        }
    }
    ctx->pc = 0x1EC48Cu;
label_1ec48c:
    // 0x1ec48c: 0xc07b098  jal         func_1EC260
label_1ec490:
    if (ctx->pc == 0x1EC490u) {
        ctx->pc = 0x1EC494u;
        goto label_1ec494;
    }
    ctx->pc = 0x1EC48Cu;
    SET_GPR_U32(ctx, 31, 0x1EC494u);
    ctx->pc = 0x1EC260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1EC260u, 0x1EC48Cu, 0x1EC494u)) {
        return;
    }
    ctx->pc = 0x1EC494u;
label_1ec494:
    // 0x1ec494: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x1ec494u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_1ec498:
    // 0x1ec498: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x1ec498u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1ec49c:
    // 0x1ec49c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1ec4a0:
    if (ctx->pc == 0x1EC4A0u) {
        ctx->pc = 0x1EC4A4u;
        goto label_1ec4a4;
    }
    ctx->pc = 0x1EC49Cu;
    {
        const bool branch_taken_0x1ec49c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ec49c) {
            ctx->pc = 0x1EC4B0u;
            goto label_1ec4b0;
        }
    }
    ctx->pc = 0x1EC4A4u;
label_1ec4a4:
    // 0x1ec4a4: 0xc07b098  jal         func_1EC260
label_1ec4a8:
    if (ctx->pc == 0x1EC4A8u) {
        ctx->pc = 0x1EC4ACu;
        goto label_1ec4ac;
    }
    ctx->pc = 0x1EC4A4u;
    SET_GPR_U32(ctx, 31, 0x1EC4ACu);
    ctx->pc = 0x1EC260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1EC260u, 0x1EC4A4u, 0x1EC4ACu)) {
        return;
    }
    ctx->pc = 0x1EC4ACu;
label_1ec4ac:
    // 0x1ec4ac: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x1ec4acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_1ec4b0:
    // 0x1ec4b0: 0xc07a7dc  jal         func_1E9F70
label_1ec4b4:
    if (ctx->pc == 0x1EC4B4u) {
        ctx->pc = 0x1EC4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC4B0u;
        // 0x1ec4b4: 0x8e240018  lw          $a0, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC4B8u;
        goto label_1ec4b8;
    }
    ctx->pc = 0x1EC4B0u;
    SET_GPR_U32(ctx, 31, 0x1EC4B8u);
    ctx->pc = 0x1EC4B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC4B0u;
    // 0x1ec4b4: 0x8e240018  lw          $a0, 0x18($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E9F70u, 0x1EC4B0u, 0x1EC4B8u)) {
        return;
    }
    ctx->pc = 0x1EC4B8u;
label_1ec4b8:
    // 0x1ec4b8: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x1ec4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
label_1ec4bc:
    // 0x1ec4bc: 0x10000002  b           . + 4 + (0x2 << 2)
label_1ec4c0:
    if (ctx->pc == 0x1EC4C0u) {
        ctx->pc = 0x1EC4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC4BCu;
        // 0x1ec4c0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC4C4u;
        goto label_1ec4c4;
    }
    ctx->pc = 0x1EC4BCu;
    {
        const bool branch_taken_0x1ec4bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC4BCu;
        // 0x1ec4c0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec4bc) {
            ctx->pc = 0x1EC4C8u;
            goto label_1ec4c8;
        }
    }
    ctx->pc = 0x1EC4C4u;
label_1ec4c4:
    // 0x1ec4c4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ec4c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ec4c8:
    // 0x1ec4c8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1ec4c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1ec4cc:
    // 0x1ec4cc: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1ec4ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1ec4d0:
    // 0x1ec4d0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1ec4d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1ec4d4:
    // 0x1ec4d4: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1ec4d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1ec4d8:
    // 0x1ec4d8: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x1ec4d8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ec4dc:
    // 0x1ec4dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ec4dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ec4e0:
    // 0x1ec4e0: 0x3e00008  jr          $ra
label_1ec4e4:
    if (ctx->pc == 0x1EC4E4u) {
        ctx->pc = 0x1EC4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC4E0u;
        // 0x1ec4e4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC4E8u;
        goto label_fallthrough_0x1ec4e0;
    }
    ctx->pc = 0x1EC4E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EC4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC4E0u;
        // 0x1ec4e4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EC4E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1ec4e0:
    ctx->pc = 0x1EC4E8u;
}
