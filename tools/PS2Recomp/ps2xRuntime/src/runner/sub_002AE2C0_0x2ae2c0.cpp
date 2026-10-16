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

// Function: sub_002AE2C0
// Address: 0x2ae2c0 - 0x2ae4b0
void sub_002AE2C0_0x2ae2c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AE2C0_0x2ae2c0");
#endif

    switch (ctx->pc) {
        case 0x2ae2ecu: goto label_2ae2ec;
        case 0x2ae300u: goto label_2ae300;
        case 0x2ae30cu: goto label_2ae30c;
        case 0x2ae3ecu: goto label_2ae3ec;
        case 0x2ae3f8u: goto label_2ae3f8;
        default: break;
    }

    ctx->pc = 0x2ae2c0u;

    // 0x2ae2c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ae2c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ae2c4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2ae2c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2ae2c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ae2c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2ae2cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ae2ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae2d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ae2d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ae2d4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2ae2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ae2d8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2ae2d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2ae2dc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2AE2DCu;
    {
        const bool branch_taken_0x2ae2dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE2DCu;
        // 0x2ae2e0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae2dc) {
            ctx->pc = 0x2AE2F8u;
            goto label_2ae2f8;
        }
    }
    ctx->pc = 0x2AE2E4u;
    // 0x2ae2e4: 0xc0b124e  jal         func_2C4938
    ctx->pc = 0x2AE2E4u;
    SET_GPR_U32(ctx, 31, 0x2AE2ECu);
    ctx->pc = 0x2C4938u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2C4938u, 0x2AE2E4u, 0x2AE2ECu)) {
        return;
    }
    ctx->pc = 0x2AE2ECu;
label_2ae2ec:
    // 0x2ae2ec: 0x222182b  sltu        $v1, $s1, $v0
    ctx->pc = 0x2ae2ecu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2ae2f0: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x2ae2f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
    // 0x2ae2f4: 0x43880b  movn        $s1, $v0, $v1
    ctx->pc = 0x2ae2f4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2));
label_2ae2f8:
    // 0x2ae2f8: 0xc0b144c  jal         func_2C5130
    ctx->pc = 0x2AE2F8u;
    SET_GPR_U32(ctx, 31, 0x2AE300u);
    ctx->pc = 0x2AE2FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE2F8u;
    // 0x2ae2fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5130u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2C5130u, 0x2AE2F8u, 0x2AE300u)) {
        return;
    }
    ctx->pc = 0x2AE300u;
label_2ae300:
    // 0x2ae300: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ae300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae304: 0xc0b00ca  jal         func_2C0328
    ctx->pc = 0x2AE304u;
    SET_GPR_U32(ctx, 31, 0x2AE30Cu);
    ctx->pc = 0x2AE308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE304u;
    // 0x2ae308: 0xae020050  sw          $v0, 0x50($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0328u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2C0328u, 0x2AE304u, 0x2AE30Cu)) {
        return;
    }
    ctx->pc = 0x2AE30Cu;
label_2ae30c:
    // 0x2ae30c: 0x8e03003c  lw          $v1, 0x3C($s0)
    ctx->pc = 0x2ae30cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x2ae310: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2ae310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2ae314: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x2ae314u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae318: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x2ae318u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x2ae31c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2ae31cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2ae320: 0x34a5fff0  ori         $a1, $a1, 0xFFF0
    ctx->pc = 0x2ae320u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65520);
    // 0x2ae324: 0x642018  mult        $a0, $v1, $a0
    ctx->pc = 0x2ae324u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2ae328: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2ae328u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2ae32c: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x2ae32cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x2ae330: 0x33100  sll         $a2, $v1, 4
    ctx->pc = 0x2ae330u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2ae334: 0x454024  and         $t0, $v0, $a1
    ctx->pc = 0x2ae334u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x2ae338: 0x8e070008  lw          $a3, 0x8($s0)
    ctx->pc = 0x2ae338u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2ae33c: 0x100102d  daddu       $v0, $t0, $zero
    ctx->pc = 0x2ae33cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae340: 0x24c6000f  addiu       $a2, $a2, 0xF
    ctx->pc = 0x2ae340u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15));
    // 0x2ae344: 0x2484000f  addiu       $a0, $a0, 0xF
    ctx->pc = 0x2ae344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x2ae348: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2ae348u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x2ae34c: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x2ae34cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x2ae350: 0xc53024  and         $a2, $a2, $a1
    ctx->pc = 0x2ae350u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x2ae354: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x2ae354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x2ae358: 0x1044021  addu        $t0, $t0, $a0
    ctx->pc = 0x2ae358u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x2ae35c: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x2ae35cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x2ae360: 0x1064021  addu        $t0, $t0, $a2
    ctx->pc = 0x2ae360u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x2ae364: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x2ae364u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x2ae368: 0x1034021  addu        $t0, $t0, $v1
    ctx->pc = 0x2ae368u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x2ae36c: 0x24e7000f  addiu       $a3, $a3, 0xF
    ctx->pc = 0x2ae36cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 15));
    // 0x2ae370: 0x1024021  addu        $t0, $t0, $v0
    ctx->pc = 0x2ae370u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x2ae374: 0x8e090000  lw          $t1, 0x0($s0)
    ctx->pc = 0x2ae374u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ae378: 0xe53824  and         $a3, $a3, $a1
    ctx->pc = 0x2ae378u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
    // 0x2ae37c: 0x1074021  addu        $t0, $t0, $a3
    ctx->pc = 0x2ae37cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x2ae380: 0xae0a0064  sw          $t2, 0x64($s0)
    ctx->pc = 0x2ae380u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 10));
    // 0x2ae384: 0x31220008  andi        $v0, $t1, 0x8
    ctx->pc = 0x2ae384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)8);
    // 0x2ae388: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2AE388u;
    {
        const bool branch_taken_0x2ae388 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE388u;
        // 0x2ae38c: 0xae08005c  sw          $t0, 0x5C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae388) {
            ctx->pc = 0x2AE3B0u;
            goto label_2ae3b0;
        }
    }
    ctx->pc = 0x2AE390u;
    // 0x2ae390: 0x8e060050  lw          $a2, 0x50($s0)
    ctx->pc = 0x2ae390u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x2ae394: 0x31240002  andi        $a0, $t1, 0x2
    ctx->pc = 0x2ae394u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)2);
    // 0x2ae398: 0x31250004  andi        $a1, $t1, 0x4
    ctx->pc = 0x2ae398u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)4);
    // 0x2ae39c: 0xca1021  addu        $v0, $a2, $t2
    ctx->pc = 0x2ae39cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x2ae3a0: 0x44300b  movn        $a2, $v0, $a0
    ctx->pc = 0x2ae3a0u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2));
    // 0x2ae3a4: 0xc81821  addu        $v1, $a2, $t0
    ctx->pc = 0x2ae3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x2ae3a8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2AE3A8u;
    {
        const bool branch_taken_0x2ae3a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE3A8u;
        // 0x2ae3ac: 0x65300b  movn        $a2, $v1, $a1 (Delay Slot)
        if (GPR_U64(ctx, 5) != 0) SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae3a8) {
            ctx->pc = 0x2AE3DCu;
            goto label_2ae3dc;
        }
    }
    ctx->pc = 0x2AE3B0u;
label_2ae3b0:
    // 0x2ae3b0: 0x31220002  andi        $v0, $t1, 0x2
    ctx->pc = 0x2ae3b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)2);
    // 0x2ae3b4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2AE3B4u;
    {
        const bool branch_taken_0x2ae3b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE3B4u;
        // 0x2ae3b8: 0x31220004  andi        $v0, $t1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae3b4) {
            ctx->pc = 0x2AE3D4u;
            goto label_2ae3d4;
        }
    }
    ctx->pc = 0x2AE3BCu;
    // 0x2ae3bc: 0x10a1821  addu        $v1, $t0, $t2
    ctx->pc = 0x2ae3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
    // 0x2ae3c0: 0x140302d  daddu       $a2, $t2, $zero
    ctx->pc = 0x2ae3c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae3c4: 0x62300b  movn        $a2, $v1, $v0
    ctx->pc = 0x2ae3c4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3));
    // 0x2ae3c8: 0x226202b  sltu        $a0, $s1, $a2
    ctx->pc = 0x2ae3c8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2ae3cc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2AE3CCu;
    {
        const bool branch_taken_0x2ae3cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE3CCu;
        // 0x2ae3d0: 0xc4880b  movn        $s1, $a2, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_U64(ctx, 17, GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae3cc) {
            ctx->pc = 0x2AE3E4u;
            goto label_2ae3e4;
        }
    }
    ctx->pc = 0x2AE3D4u;
label_2ae3d4:
    // 0x2ae3d4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AE3D4u;
    {
        const bool branch_taken_0x2ae3d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE3D4u;
        // 0x2ae3d8: 0x100302d  daddu       $a2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae3d4) {
            ctx->pc = 0x2AE3E4u;
            goto label_2ae3e4;
        }
    }
    ctx->pc = 0x2AE3DCu;
label_2ae3dc:
    // 0x2ae3dc: 0x226102b  sltu        $v0, $s1, $a2
    ctx->pc = 0x2ae3dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2ae3e0: 0xc2880b  movn        $s1, $a2, $v0
    ctx->pc = 0x2ae3e0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 17, GPR_U64(ctx, 6));
label_2ae3e4:
    // 0x2ae3e4: 0xc0b01d2  jal         func_2C0748
    ctx->pc = 0x2AE3E4u;
    SET_GPR_U32(ctx, 31, 0x2AE3ECu);
    ctx->pc = 0x2AE3E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE3E4u;
    // 0x2ae3e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0748u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2C0748u, 0x2AE3E4u, 0x2AE3ECu)) {
        return;
    }
    ctx->pc = 0x2AE3ECu;
label_2ae3ec:
    // 0x2ae3ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ae3ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae3f0: 0xc0b00da  jal         func_2C0368
    ctx->pc = 0x2AE3F0u;
    SET_GPR_U32(ctx, 31, 0x2AE3F8u);
    ctx->pc = 0x2AE3F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE3F0u;
    // 0x2ae3f4: 0xae020044  sw          $v0, 0x44($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0368u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2C0368u, 0x2AE3F0u, 0x2AE3F8u)) {
        return;
    }
    ctx->pc = 0x2AE3F8u;
label_2ae3f8:
    // 0x2ae3f8: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x2ae3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2ae3fc: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x2ae3fcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae400: 0x2405fff0  addiu       $a1, $zero, -0x10
    ctx->pc = 0x2ae400u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x2ae404: 0x8e080000  lw          $t0, 0x0($s0)
    ctx->pc = 0x2ae404u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ae408: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2ae408u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ae40c: 0x41180  sll         $v0, $a0, 6
    ctx->pc = 0x2ae40cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x2ae410: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x2ae410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x2ae414: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x2ae414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x2ae418: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x2ae418u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x2ae41c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x2ae41cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2ae420: 0x454824  and         $t1, $v0, $a1
    ctx->pc = 0x2ae420u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x2ae424: 0x833821  addu        $a3, $a0, $v1
    ctx->pc = 0x2ae424u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2ae428: 0xae0a0048  sw          $t2, 0x48($s0)
    ctx->pc = 0x2ae428u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 10));
    // 0x2ae42c: 0x31060010  andi        $a2, $t0, 0x10
    ctx->pc = 0x2ae42cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)16);
    // 0x2ae430: 0xae090058  sw          $t1, 0x58($s0)
    ctx->pc = 0x2ae430u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 9));
    // 0x2ae434: 0x10c0000a  beqz        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x2AE434u;
    {
        const bool branch_taken_0x2ae434 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE434u;
        // 0x2ae438: 0xae070054  sw          $a3, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae434) {
            ctx->pc = 0x2AE460u;
            goto label_2ae460;
        }
    }
    ctx->pc = 0x2AE43Cu;
    // 0x2ae43c: 0x8e030044  lw          $v1, 0x44($s0)
    ctx->pc = 0x2ae43cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x2ae440: 0x31040020  andi        $a0, $t0, 0x20
    ctx->pc = 0x2ae440u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)32);
    // 0x2ae444: 0x31050040  andi        $a1, $t0, 0x40
    ctx->pc = 0x2ae444u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)64);
    // 0x2ae448: 0x6a3021  addu        $a2, $v1, $t2
    ctx->pc = 0x2ae448u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x2ae44c: 0xc71021  addu        $v0, $a2, $a3
    ctx->pc = 0x2ae44cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x2ae450: 0x44300b  movn        $a2, $v0, $a0
    ctx->pc = 0x2ae450u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2));
    // 0x2ae454: 0xc91821  addu        $v1, $a2, $t1
    ctx->pc = 0x2ae454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x2ae458: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2AE458u;
    {
        const bool branch_taken_0x2ae458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE458u;
        // 0x2ae45c: 0x65300b  movn        $a2, $v1, $a1 (Delay Slot)
        if (GPR_U64(ctx, 5) != 0) SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae458) {
            ctx->pc = 0x2AE48Cu;
            goto label_2ae48c;
        }
    }
    ctx->pc = 0x2AE460u;
label_2ae460:
    // 0x2ae460: 0x31020020  andi        $v0, $t0, 0x20
    ctx->pc = 0x2ae460u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)32);
    // 0x2ae464: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2AE464u;
    {
        const bool branch_taken_0x2ae464 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE464u;
        // 0x2ae468: 0x31020040  andi        $v0, $t0, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae464) {
            ctx->pc = 0x2AE484u;
            goto label_2ae484;
        }
    }
    ctx->pc = 0x2AE46Cu;
    // 0x2ae46c: 0x1271821  addu        $v1, $t1, $a3
    ctx->pc = 0x2ae46cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x2ae470: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x2ae470u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae474: 0x62300b  movn        $a2, $v1, $v0
    ctx->pc = 0x2ae474u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3));
    // 0x2ae478: 0x226202b  sltu        $a0, $s1, $a2
    ctx->pc = 0x2ae478u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2ae47c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2AE47Cu;
    {
        const bool branch_taken_0x2ae47c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE47Cu;
        // 0x2ae480: 0xc4880b  movn        $s1, $a2, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_U64(ctx, 17, GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae47c) {
            ctx->pc = 0x2AE494u;
            goto label_2ae494;
        }
    }
    ctx->pc = 0x2AE484u;
label_2ae484:
    // 0x2ae484: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AE484u;
    {
        const bool branch_taken_0x2ae484 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE484u;
        // 0x2ae488: 0x120302d  daddu       $a2, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae484) {
            ctx->pc = 0x2AE494u;
            goto label_2ae494;
        }
    }
    ctx->pc = 0x2AE48Cu;
label_2ae48c:
    // 0x2ae48c: 0x226102b  sltu        $v0, $s1, $a2
    ctx->pc = 0x2ae48cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2ae490: 0xc2880b  movn        $s1, $a2, $v0
    ctx->pc = 0x2ae490u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 17, GPR_U64(ctx, 6));
label_2ae494:
    // 0x2ae494: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2ae494u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae498: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2ae498u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ae49c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ae49cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ae4a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ae4a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ae4a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2AE4A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AE4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE4A4u;
        // 0x2ae4a8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AE4A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AE4ACu;
    // 0x2ae4ac: 0x0  nop
    ctx->pc = 0x2ae4acu;
    // NOP
    ctx->pc = 0x2ae4b0u;
}
