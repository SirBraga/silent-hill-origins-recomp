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

// Function: sub_0019F368
// Address: 0x19f368 - 0x19f630
void sub_0019F368_0x19f368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019F368_0x19f368");
#endif

    switch (ctx->pc) {
        case 0x19f3a0u: goto label_19f3a0;
        case 0x19f3b4u: goto label_19f3b4;
        case 0x19f3c8u: goto label_19f3c8;
        case 0x19f3e4u: goto label_19f3e4;
        case 0x19f400u: goto label_19f400;
        case 0x19f430u: goto label_19f430;
        case 0x19f450u: goto label_19f450;
        case 0x19f474u: goto label_19f474;
        case 0x19f4b0u: goto label_19f4b0;
        case 0x19f4d0u: goto label_19f4d0;
        case 0x19f4e4u: goto label_19f4e4;
        case 0x19f528u: goto label_19f528;
        case 0x19f550u: goto label_19f550;
        case 0x19f570u: goto label_19f570;
        case 0x19f5bcu: goto label_19f5bc;
        case 0x19f5d0u: goto label_19f5d0;
        case 0x19f5ecu: goto label_19f5ec;
        case 0x19f5fcu: goto label_19f5fc;
        default: break;
    }

    ctx->pc = 0x19f368u;

    // 0x19f368: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x19f368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x19f36c: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x19f36cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x19f370: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x19f370u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f374: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x19f374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x19f378: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x19f378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x19f37c: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x19f37cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x19f380: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x19f380u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f384: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x19f384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x19f388: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x19f388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x19f38c: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x19f38cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x19f390: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x19f390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
    // 0x19f394: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19f394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19f398: 0xc067fae  jal         func_19FEB8
    ctx->pc = 0x19F398u;
    SET_GPR_U32(ctx, 31, 0x19F3A0u);
    ctx->pc = 0x19F39Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F398u;
    // 0x19f39c: 0xae650804  sw          $a1, 0x804($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 2052), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FEB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19FEB8u, 0x19F398u, 0x19F3A0u)) {
        return;
    }
    ctx->pc = 0x19F3A0u;
label_19f3a0:
    // 0x19f3a0: 0xae600800  sw          $zero, 0x800($s3)
    ctx->pc = 0x19f3a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 2048), GPR_U32(ctx, 0));
    // 0x19f3a4: 0x24060800  addiu       $a2, $zero, 0x800
    ctx->pc = 0x19f3a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x19f3a8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x19f3a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f3ac: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x19F3ACu;
    SET_GPR_U32(ctx, 31, 0x19F3B4u);
    ctx->pc = 0x19F3B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F3ACu;
    // 0x19f3b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x19F3ACu, 0x19F3B4u)) {
        return;
    }
    ctx->pc = 0x19F3B4u;
label_19f3b4:
    // 0x19f3b4: 0x8e630804  lw          $v1, 0x804($s3)
    ctx->pc = 0x19f3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2052)));
    // 0x19f3b8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x19f3b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19f3bc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x19f3bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19f3c0: 0xc080924  jal         func_202490
    ctx->pc = 0x19F3C0u;
    SET_GPR_U32(ctx, 31, 0x19F3C8u);
    ctx->pc = 0x19F3C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F3C0u;
    // 0x19f3c4: 0x42080  sll         $a0, $a0, 2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202490u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202490u, 0x19F3C0u, 0x19F3C8u)) {
        return;
    }
    ctx->pc = 0x19F3C8u;
label_19f3c8:
    // 0x19f3c8: 0x8e630804  lw          $v1, 0x804($s3)
    ctx->pc = 0x19f3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2052)));
    // 0x19f3cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19f3ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f3d0: 0xae620844  sw          $v0, 0x844($s3)
    ctx->pc = 0x19f3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 2116), GPR_U32(ctx, 2));
    // 0x19f3d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19f3d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f3d8: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x19f3d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19f3dc: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x19F3DCu;
    SET_GPR_U32(ctx, 31, 0x19F3E4u);
    ctx->pc = 0x19F3E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F3DCu;
    // 0x19f3e0: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x19F3DCu, 0x19F3E4u)) {
        return;
    }
    ctx->pc = 0x19F3E4u;
label_19f3e4:
    // 0x19f3e4: 0x8e630804  lw          $v1, 0x804($s3)
    ctx->pc = 0x19f3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2052)));
    // 0x19f3e8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x19f3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x19f3ec: 0x5840002b  blezl       $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x19F3ECu;
    {
        const bool branch_taken_0x19f3ec = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x19f3ec) {
            ctx->pc = 0x19F3F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19F3ECu;
            // 0x19f3f0: 0x8e620804  lw          $v0, 0x804($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2052)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19F49Cu;
            goto label_19f49c;
        }
    }
    ctx->pc = 0x19F3F4u;
    // 0x19f3f4: 0x2415003c  addiu       $s5, $zero, 0x3C
    ctx->pc = 0x19f3f4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x19f3f8: 0x2552018  mult        $a0, $s2, $s5
    ctx->pc = 0x19f3f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x19f3fc: 0x0  nop
    ctx->pc = 0x19f3fcu;
    // NOP
label_19f400:
    // 0x19f400: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x19f400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x19f404: 0x8e650844  lw          $a1, 0x844($s3)
    ctx->pc = 0x19f404u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2116)));
    // 0x19f408: 0x83a021  addu        $s4, $a0, $v1
    ctx->pc = 0x19f408u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x19f40c: 0x8e820020  lw          $v0, 0x20($s4)
    ctx->pc = 0x19f40cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x19f410: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19f410u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19f414: 0xa28821  addu        $s1, $a1, $v0
    ctx->pc = 0x19f414u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x19f418: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x19f418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x19f41c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x19F41Cu;
    {
        const bool branch_taken_0x19f41c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19F420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F41Cu;
        // 0x19f420: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f41c) {
            ctx->pc = 0x19F440u;
            goto label_19f440;
        }
    }
    ctx->pc = 0x19F424u;
    // 0x19f424: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x19f424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x19f428: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x19F428u;
    SET_GPR_U32(ctx, 31, 0x19F430u);
    ctx->pc = 0x19F42Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F428u;
    // 0x19f42c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x19F428u, 0x19F430u)) {
        return;
    }
    ctx->pc = 0x19F430u;
label_19f430:
    // 0x19f430: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x19f430u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x19f434: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19f434u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f438: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x19F438u;
    {
        const bool branch_taken_0x19f438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F438u;
        // 0x19f43c: 0xae300000  sw          $s0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f438) {
            ctx->pc = 0x19F47Cu;
            goto label_19f47c;
        }
    }
    ctx->pc = 0x19F440u;
label_19f440:
    // 0x19f440: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x19f440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x19f444: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x19F444u;
    {
        const bool branch_taken_0x19f444 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F444u;
        // 0x19f448: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f444) {
            ctx->pc = 0x19F468u;
            goto label_19f468;
        }
    }
    ctx->pc = 0x19F44Cu;
    // 0x19f44c: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x19f44cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_19f450:
    // 0x19f450: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x19f450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x19f454: 0x0  nop
    ctx->pc = 0x19f454u;
    // NOP
    // 0x19f458: 0x0  nop
    ctx->pc = 0x19f458u;
    // NOP
    // 0x19f45c: 0x0  nop
    ctx->pc = 0x19f45cu;
    // NOP
    // 0x19f460: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x19F460u;
    {
        const bool branch_taken_0x19f460 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19f460) {
            ctx->pc = 0x19F464u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19F460u;
            // 0x19f464: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19F450u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19f450;
        }
    }
    ctx->pc = 0x19F468u;
label_19f468:
    // 0x19f468: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x19f468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x19f46c: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x19F46Cu;
    SET_GPR_U32(ctx, 31, 0x19F474u);
    ctx->pc = 0x19F470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F46Cu;
    // 0x19f470: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x19F46Cu, 0x19F474u)) {
        return;
    }
    ctx->pc = 0x19F474u;
label_19f474:
    // 0x19f474: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x19f474u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x19f478: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19f478u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19f47c:
    // 0x19f47c: 0xae140000  sw          $s4, 0x0($s0)
    ctx->pc = 0x19f47cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 20));
    // 0x19f480: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x19f480u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x19f484: 0x8e630804  lw          $v1, 0x804($s3)
    ctx->pc = 0x19f484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2052)));
    // 0x19f488: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x19f488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x19f48c: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x19f48cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x19f490: 0x5440ffdb  bnel        $v0, $zero, . + 4 + (-0x25 << 2)
    ctx->pc = 0x19F490u;
    {
        const bool branch_taken_0x19f490 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19f490) {
            ctx->pc = 0x19F494u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19F490u;
            // 0x19f494: 0x2552018  mult        $a0, $s2, $s5 (Delay Slot)
            { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x19F400u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19f400;
        }
    }
    ctx->pc = 0x19F498u;
    // 0x19f498: 0x8e620804  lw          $v0, 0x804($s3)
    ctx->pc = 0x19f498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2052)));
label_19f49c:
    // 0x19f49c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x19f49cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19f4a0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x19f4a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f4a4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x19f4a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19f4a8: 0xc080924  jal         func_202490
    ctx->pc = 0x19F4A8u;
    SET_GPR_U32(ctx, 31, 0x19F4B0u);
    ctx->pc = 0x19F4ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F4A8u;
    // 0x19f4ac: 0x42080  sll         $a0, $a0, 2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202490u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202490u, 0x19F4A8u, 0x19F4B0u)) {
        return;
    }
    ctx->pc = 0x19F4B0u;
label_19f4b0:
    // 0x19f4b0: 0xae620808  sw          $v0, 0x808($s3)
    ctx->pc = 0x19f4b0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 2056), GPR_U32(ctx, 2));
    // 0x19f4b4: 0x8e630804  lw          $v1, 0x804($s3)
    ctx->pc = 0x19f4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2052)));
    // 0x19f4b8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x19f4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19f4bc: 0x58400014  blezl       $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x19F4BCu;
    {
        const bool branch_taken_0x19f4bc = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x19f4bc) {
            ctx->pc = 0x19F4C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19F4BCu;
            // 0x19f4c0: 0x8e640804  lw          $a0, 0x804($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2052)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19F510u;
            goto label_19f510;
        }
    }
    ctx->pc = 0x19F4C4u;
    // 0x19f4c4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x19f4c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f4c8: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x19f4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x19f4cc: 0x0  nop
    ctx->pc = 0x19f4ccu;
    // NOP
label_19f4d0:
    // 0x19f4d0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x19f4d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19f4d4: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x19f4d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x19f4d8: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x19f4d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x19f4dc: 0xc065c40  jal         func_197100
    ctx->pc = 0x19F4DCu;
    SET_GPR_U32(ctx, 31, 0x19F4E4u);
    ctx->pc = 0x19F4E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F4DCu;
    // 0x19f4e0: 0x26310098  addiu       $s1, $s1, 0x98 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197100u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197100u, 0x19F4DCu, 0x19F4E4u)) {
        return;
    }
    ctx->pc = 0x19F4E4u;
label_19f4e4:
    // 0x19f4e4: 0x8e640808  lw          $a0, 0x808($s3)
    ctx->pc = 0x19f4e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2056)));
    // 0x19f4e8: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x19f4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x19f4ec: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x19f4ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x19f4f0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x19f4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19f4f4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x19f4f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x19f4f8: 0x8e630804  lw          $v1, 0x804($s3)
    ctx->pc = 0x19f4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2052)));
    // 0x19f4fc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x19f4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19f500: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x19f500u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x19f504: 0x5440fff2  bnel        $v0, $zero, . + 4 + (-0xE << 2)
    ctx->pc = 0x19F504u;
    {
        const bool branch_taken_0x19f504 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19f504) {
            ctx->pc = 0x19F508u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19F504u;
            // 0x19f508: 0x8c640008  lw          $a0, 0x8($v1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19F4D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19f4d0;
        }
    }
    ctx->pc = 0x19F50Cu;
    // 0x19f50c: 0x8e640804  lw          $a0, 0x804($s3)
    ctx->pc = 0x19f50cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2052)));
label_19f510:
    // 0x19f510: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x19f510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x19f514: 0x18400024  blez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x19F514u;
    {
        const bool branch_taken_0x19f514 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x19F518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F514u;
        // 0x19f518: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f514) {
            ctx->pc = 0x19F5A8u;
            goto label_19f5a8;
        }
    }
    ctx->pc = 0x19F51Cu;
    // 0x19f51c: 0x2417003c  addiu       $s7, $zero, 0x3C
    ctx->pc = 0x19f51cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x19f520: 0x2416003c  addiu       $s6, $zero, 0x3C
    ctx->pc = 0x19f520u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x19f524: 0xd71818  mult        $v1, $a2, $s7
    ctx->pc = 0x19f524u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_19f528:
    // 0x19f528: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x19f528u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f52c: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x19f52cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x19f530: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x19f530u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f534: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x19f534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19f538: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x19f538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x19f53c: 0x18400014  blez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x19F53Cu;
    {
        const bool branch_taken_0x19f53c = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x19F540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F53Cu;
        // 0x19f540: 0x24d50001  addiu       $s5, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f53c) {
            ctx->pc = 0x19F590u;
            goto label_19f590;
        }
    }
    ctx->pc = 0x19F544u;
    // 0x19f544: 0xd69018  mult        $s2, $a2, $s6
    ctx->pc = 0x19f544u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
    // 0x19f548: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x19f548u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f54c: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x19f54cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_19f550:
    // 0x19f550: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x19f550u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x19f554: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x19f554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x19f558: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x19f558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x19f55c: 0x8c500038  lw          $s0, 0x38($v0)
    ctx->pc = 0x19f55cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x19f560: 0x2148021  addu        $s0, $s0, $s4
    ctx->pc = 0x19f560u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
    // 0x19f564: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19f564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f568: 0xc065c40  jal         func_197100
    ctx->pc = 0x19F568u;
    SET_GPR_U32(ctx, 31, 0x19F570u);
    ctx->pc = 0x19F56Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F568u;
    // 0x19f56c: 0x26940024  addiu       $s4, $s4, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197100u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197100u, 0x19F568u, 0x19F570u)) {
        return;
    }
    ctx->pc = 0x19F570u;
label_19f570:
    // 0x19f570: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x19f570u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x19f574: 0x8e650804  lw          $a1, 0x804($s3)
    ctx->pc = 0x19f574u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2052)));
    // 0x19f578: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x19f578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x19f57c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x19f57cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x19f580: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x19f580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x19f584: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x19f584u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x19f588: 0x5460fff1  bnel        $v1, $zero, . + 4 + (-0xF << 2)
    ctx->pc = 0x19F588u;
    {
        const bool branch_taken_0x19f588 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19f588) {
            ctx->pc = 0x19F58Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19F588u;
            // 0x19f58c: 0x8ca2000c  lw          $v0, 0xC($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19F550u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19f550;
        }
    }
    ctx->pc = 0x19F590u;
label_19f590:
    // 0x19f590: 0x8e640804  lw          $a0, 0x804($s3)
    ctx->pc = 0x19f590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2052)));
    // 0x19f594: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x19f594u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f598: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x19f598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x19f59c: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x19f59cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x19f5a0: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x19F5A0u;
    {
        const bool branch_taken_0x19f5a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19F5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F5A0u;
        // 0x19f5a4: 0xd71818  mult        $v1, $a2, $s7 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f5a0) {
            ctx->pc = 0x19F528u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19f528;
        }
    }
    ctx->pc = 0x19F5A8u;
label_19f5a8:
    // 0x19f5a8: 0x8e64084c  lw          $a0, 0x84C($s3)
    ctx->pc = 0x19f5a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2124)));
    // 0x19f5ac: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x19F5ACu;
    {
        const bool branch_taken_0x19f5ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f5ac) {
            ctx->pc = 0x19F5B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19F5ACu;
            // 0x19f5b0: 0x8e620804  lw          $v0, 0x804($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2052)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19F5C0u;
            goto label_19f5c0;
        }
    }
    ctx->pc = 0x19F5B4u;
    // 0x19f5b4: 0xc0808d4  jal         func_202350
    ctx->pc = 0x19F5B4u;
    SET_GPR_U32(ctx, 31, 0x19F5BCu);
    ctx->pc = 0x202350u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202350u, 0x19F5B4u, 0x19F5BCu)) {
        return;
    }
    ctx->pc = 0x19F5BCu;
label_19f5bc:
    // 0x19f5bc: 0x8e620804  lw          $v0, 0x804($s3)
    ctx->pc = 0x19f5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2052)));
label_19f5c0:
    // 0x19f5c0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x19f5c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19f5c4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x19f5c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19f5c8: 0xc080924  jal         func_202490
    ctx->pc = 0x19F5C8u;
    SET_GPR_U32(ctx, 31, 0x19F5D0u);
    ctx->pc = 0x19F5CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F5C8u;
    // 0x19f5cc: 0x42080  sll         $a0, $a0, 2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202490u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202490u, 0x19F5C8u, 0x19F5D0u)) {
        return;
    }
    ctx->pc = 0x19F5D0u;
label_19f5d0:
    // 0x19f5d0: 0x8e630804  lw          $v1, 0x804($s3)
    ctx->pc = 0x19f5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2052)));
    // 0x19f5d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19f5d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f5d8: 0xae62084c  sw          $v0, 0x84C($s3)
    ctx->pc = 0x19f5d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 2124), GPR_U32(ctx, 2));
    // 0x19f5dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19f5dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f5e0: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x19f5e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19f5e4: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x19F5E4u;
    SET_GPR_U32(ctx, 31, 0x19F5ECu);
    ctx->pc = 0x19F5E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F5E4u;
    // 0x19f5e8: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x19F5E4u, 0x19F5ECu)) {
        return;
    }
    ctx->pc = 0x19F5ECu;
label_19f5ec:
    // 0x19f5ec: 0x8e630804  lw          $v1, 0x804($s3)
    ctx->pc = 0x19f5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2052)));
    // 0x19f5f0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x19f5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19f5f4: 0xc080888  jal         func_202220
    ctx->pc = 0x19F5F4u;
    SET_GPR_U32(ctx, 31, 0x19F5FCu);
    ctx->pc = 0x19F5F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F5F4u;
    // 0x19f5f8: 0x42080  sll         $a0, $a0, 2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202220u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202220u, 0x19F5F4u, 0x19F5FCu)) {
        return;
    }
    ctx->pc = 0x19F5FCu;
label_19f5fc:
    // 0x19f5fc: 0xae620848  sw          $v0, 0x848($s3)
    ctx->pc = 0x19f5fcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 2120), GPR_U32(ctx, 2));
    // 0x19f600: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x19f600u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x19f604: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x19f604u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x19f608: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x19f608u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19f60c: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x19f60cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19f610: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x19f610u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19f614: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x19f614u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19f618: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x19f618u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19f61c: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x19f61cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19f620: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19f620u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19f624: 0x3e00008  jr          $ra
    ctx->pc = 0x19F624u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F624u;
        // 0x19f628: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F624u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19F62Cu;
    // 0x19f62c: 0x0  nop
    ctx->pc = 0x19f62cu;
    // NOP
    ctx->pc = 0x19f630u;
}
