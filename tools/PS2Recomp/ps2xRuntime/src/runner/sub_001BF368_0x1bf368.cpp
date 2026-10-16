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

// Function: sub_001BF368
// Address: 0x1bf368 - 0x1bf600
void sub_001BF368_0x1bf368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BF368_0x1bf368");
#endif

    switch (ctx->pc) {
        case 0x1bf404u: goto label_1bf404;
        case 0x1bf470u: goto label_1bf470;
        case 0x1bf4dcu: goto label_1bf4dc;
        case 0x1bf540u: goto label_1bf540;
        case 0x1bf57cu: goto label_1bf57c;
        case 0x1bf5b4u: goto label_1bf5b4;
        case 0x1bf5ecu: goto label_1bf5ec;
        default: break;
    }

    ctx->pc = 0x1bf368u;

    // 0x1bf368: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1bf368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1bf36c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1bf36cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1bf370: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1bf370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1bf374: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1bf374u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf378: 0x8e020308  lw          $v0, 0x308($s0)
    ctx->pc = 0x1bf378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 776)));
    // 0x1bf37c: 0x5440009c  bnel        $v0, $zero, . + 4 + (0x9C << 2)
    ctx->pc = 0x1BF37Cu;
    {
        const bool branch_taken_0x1bf37c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bf37c) {
            ctx->pc = 0x1BF380u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BF37Cu;
            // 0x1bf380: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BF5F0u;
            goto label_1bf5f0;
        }
    }
    ctx->pc = 0x1BF384u;
    // 0x1bf384: 0x8e020310  lw          $v0, 0x310($s0)
    ctx->pc = 0x1bf384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 784)));
    // 0x1bf388: 0x54400099  bnel        $v0, $zero, . + 4 + (0x99 << 2)
    ctx->pc = 0x1BF388u;
    {
        const bool branch_taken_0x1bf388 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bf388) {
            ctx->pc = 0x1BF38Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BF388u;
            // 0x1bf38c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BF5F0u;
            goto label_1bf5f0;
        }
    }
    ctx->pc = 0x1BF390u;
    // 0x1bf390: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1bf390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1bf394: 0x10a20028  beq         $a1, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x1BF394u;
    {
        const bool branch_taken_0x1bf394 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BF398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF394u;
        // 0x1bf398: 0x28a20006  slti        $v0, $a1, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf394) {
            ctx->pc = 0x1BF438u;
            goto label_1bf438;
        }
    }
    ctx->pc = 0x1BF39Cu;
    // 0x1bf39c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BF39Cu;
    {
        const bool branch_taken_0x1bf39c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF39Cu;
        // 0x1bf3a0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf39c) {
            ctx->pc = 0x1BF3B4u;
            goto label_1bf3b4;
        }
    }
    ctx->pc = 0x1BF3A4u;
    // 0x1bf3a4: 0x50a2000a  beql        $a1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1BF3A4u;
    {
        const bool branch_taken_0x1bf3a4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1bf3a4) {
            ctx->pc = 0x1BF3A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BF3A4u;
            // 0x1bf3a8: 0x8e0202b4  lw          $v0, 0x2B4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 692)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BF3D0u;
            goto label_1bf3d0;
        }
    }
    ctx->pc = 0x1BF3ACu;
    // 0x1bf3ac: 0x10000090  b           . + 4 + (0x90 << 2)
    ctx->pc = 0x1BF3ACu;
    {
        const bool branch_taken_0x1bf3ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF3ACu;
        // 0x1bf3b0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf3ac) {
            ctx->pc = 0x1BF5F0u;
            goto label_1bf5f0;
        }
    }
    ctx->pc = 0x1BF3B4u;
label_1bf3b4:
    // 0x1bf3b4: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1bf3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1bf3b8: 0x10a2003a  beq         $a1, $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x1BF3B8u;
    {
        const bool branch_taken_0x1bf3b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BF3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF3B8u;
        // 0x1bf3bc: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf3b8) {
            ctx->pc = 0x1BF4A4u;
            goto label_1bf4a4;
        }
    }
    ctx->pc = 0x1BF3C0u;
    // 0x1bf3c0: 0x50a20061  beql        $a1, $v0, . + 4 + (0x61 << 2)
    ctx->pc = 0x1BF3C0u;
    {
        const bool branch_taken_0x1bf3c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1bf3c0) {
            ctx->pc = 0x1BF3C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BF3C0u;
            // 0x1bf3c4: 0x8e0202c0  lw          $v0, 0x2C0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 704)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BF548u;
            goto label_1bf548;
        }
    }
    ctx->pc = 0x1BF3C8u;
    // 0x1bf3c8: 0x10000089  b           . + 4 + (0x89 << 2)
    ctx->pc = 0x1BF3C8u;
    {
        const bool branch_taken_0x1bf3c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF3C8u;
        // 0x1bf3cc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf3c8) {
            ctx->pc = 0x1BF5F0u;
            goto label_1bf5f0;
        }
    }
    ctx->pc = 0x1BF3D0u;
label_1bf3d0:
    // 0x1bf3d0: 0x1040004f  beqz        $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x1BF3D0u;
    {
        const bool branch_taken_0x1bf3d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF3D0u;
        // 0x1bf3d4: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf3d0) {
            ctx->pc = 0x1BF510u;
            goto label_1bf510;
        }
    }
    ctx->pc = 0x1BF3D8u;
    // 0x1bf3d8: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1bf3d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1bf3dc: 0x8c454430  lw          $a1, 0x4430($v0)
    ctx->pc = 0x1bf3dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17456)));
    // 0x1bf3e0: 0x8c831a70  lw          $v1, 0x1A70($a0)
    ctx->pc = 0x1bf3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x701A70u));
    // 0x1bf3e4: 0x50a30008  beql        $a1, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BF3E4u;
    {
        const bool branch_taken_0x1bf3e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1bf3e4) {
            ctx->pc = 0x1BF3E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BF3E4u;
            // 0x1bf3e8: 0x8e070260  lw          $a3, 0x260($s0) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BF408u;
            goto label_1bf408;
        }
    }
    ctx->pc = 0x1BF3ECu;
    // 0x1bf3ec: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1bf3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1bf3f0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BF3F0u;
    {
        const bool branch_taken_0x1bf3f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF3F0u;
        // 0x1bf3f4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf3f0) {
            ctx->pc = 0x1BF404u;
            goto label_1bf404;
        }
    }
    ctx->pc = 0x1BF3F8u;
    // 0x1bf3f8: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x1bf3f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x1bf3fc: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x1BF3FCu;
    SET_GPR_U32(ctx, 31, 0x1BF404u);
    ctx->pc = 0x1BF400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF3FCu;
    // 0x1bf400: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1BF3FCu, 0x1BF404u)) {
        return;
    }
    ctx->pc = 0x1BF404u;
label_1bf404:
    // 0x1bf404: 0x8e070260  lw          $a3, 0x260($s0)
    ctx->pc = 0x1bf404u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
label_1bf408:
    // 0x1bf408: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x1bf408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1bf40c: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1bf40cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1bf410: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x1bf410u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x1bf414: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1bf414u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bf418: 0xe23818  mult        $a3, $a3, $v0
    ctx->pc = 0x1bf418u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x1bf41c: 0x246394d8  addiu       $v1, $v1, -0x6B28
    ctx->pc = 0x1bf41cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939864));
    // 0x1bf420: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bf420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf424: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1bf424u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bf428: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1bf428u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bf42c: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x1bf42cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1bf430: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x1BF430u;
    {
        const bool branch_taken_0x1bf430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF430u;
        // 0x1bf434: 0x8c62000c  lw          $v0, 0xC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf430) {
            ctx->pc = 0x1BF5ACu;
            goto label_1bf5ac;
        }
    }
    ctx->pc = 0x1BF438u;
label_1bf438:
    // 0x1bf438: 0x8e0202b8  lw          $v0, 0x2B8($s0)
    ctx->pc = 0x1bf438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 696)));
    // 0x1bf43c: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x1BF43Cu;
    {
        const bool branch_taken_0x1bf43c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF43Cu;
        // 0x1bf440: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf43c) {
            ctx->pc = 0x1BF510u;
            goto label_1bf510;
        }
    }
    ctx->pc = 0x1BF444u;
    // 0x1bf444: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1bf444u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1bf448: 0x8c454430  lw          $a1, 0x4430($v0)
    ctx->pc = 0x1bf448u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17456)));
    // 0x1bf44c: 0x8c831a70  lw          $v1, 0x1A70($a0)
    ctx->pc = 0x1bf44cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x701A70u));
    // 0x1bf450: 0x50a30008  beql        $a1, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BF450u;
    {
        const bool branch_taken_0x1bf450 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1bf450) {
            ctx->pc = 0x1BF454u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BF450u;
            // 0x1bf454: 0x8e070260  lw          $a3, 0x260($s0) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BF474u;
            goto label_1bf474;
        }
    }
    ctx->pc = 0x1BF458u;
    // 0x1bf458: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1bf458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1bf45c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BF45Cu;
    {
        const bool branch_taken_0x1bf45c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF45Cu;
        // 0x1bf460: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf45c) {
            ctx->pc = 0x1BF470u;
            goto label_1bf470;
        }
    }
    ctx->pc = 0x1BF464u;
    // 0x1bf464: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x1bf464u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x1bf468: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x1BF468u;
    SET_GPR_U32(ctx, 31, 0x1BF470u);
    ctx->pc = 0x1BF46Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF468u;
    // 0x1bf46c: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1BF468u, 0x1BF470u)) {
        return;
    }
    ctx->pc = 0x1BF470u;
label_1bf470:
    // 0x1bf470: 0x8e070260  lw          $a3, 0x260($s0)
    ctx->pc = 0x1bf470u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
label_1bf474:
    // 0x1bf474: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x1bf474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1bf478: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1bf478u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1bf47c: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x1bf47cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x1bf480: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1bf480u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bf484: 0xe23818  mult        $a3, $a3, $v0
    ctx->pc = 0x1bf484u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x1bf488: 0x246394d8  addiu       $v1, $v1, -0x6B28
    ctx->pc = 0x1bf488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939864));
    // 0x1bf48c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bf48cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf490: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1bf490u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bf494: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1bf494u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bf498: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x1bf498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1bf49c: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x1BF49Cu;
    {
        const bool branch_taken_0x1bf49c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF49Cu;
        // 0x1bf4a0: 0x8c620010  lw          $v0, 0x10($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf49c) {
            ctx->pc = 0x1BF5ACu;
            goto label_1bf5ac;
        }
    }
    ctx->pc = 0x1BF4A4u;
label_1bf4a4:
    // 0x1bf4a4: 0x8e0202bc  lw          $v0, 0x2BC($s0)
    ctx->pc = 0x1bf4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 700)));
    // 0x1bf4a8: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1BF4A8u;
    {
        const bool branch_taken_0x1bf4a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF4A8u;
        // 0x1bf4ac: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf4a8) {
            ctx->pc = 0x1BF510u;
            goto label_1bf510;
        }
    }
    ctx->pc = 0x1BF4B0u;
    // 0x1bf4b0: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1bf4b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1bf4b4: 0x8c454430  lw          $a1, 0x4430($v0)
    ctx->pc = 0x1bf4b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17456)));
    // 0x1bf4b8: 0x8c831a70  lw          $v1, 0x1A70($a0)
    ctx->pc = 0x1bf4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x701A70u));
    // 0x1bf4bc: 0x50a30008  beql        $a1, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BF4BCu;
    {
        const bool branch_taken_0x1bf4bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1bf4bc) {
            ctx->pc = 0x1BF4C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BF4BCu;
            // 0x1bf4c0: 0x8e070260  lw          $a3, 0x260($s0) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BF4E0u;
            goto label_1bf4e0;
        }
    }
    ctx->pc = 0x1BF4C4u;
    // 0x1bf4c4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1bf4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1bf4c8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BF4C8u;
    {
        const bool branch_taken_0x1bf4c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF4C8u;
        // 0x1bf4cc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf4c8) {
            ctx->pc = 0x1BF4DCu;
            goto label_1bf4dc;
        }
    }
    ctx->pc = 0x1BF4D0u;
    // 0x1bf4d0: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x1bf4d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x1bf4d4: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x1BF4D4u;
    SET_GPR_U32(ctx, 31, 0x1BF4DCu);
    ctx->pc = 0x1BF4D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF4D4u;
    // 0x1bf4d8: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1BF4D4u, 0x1BF4DCu)) {
        return;
    }
    ctx->pc = 0x1BF4DCu;
label_1bf4dc:
    // 0x1bf4dc: 0x8e070260  lw          $a3, 0x260($s0)
    ctx->pc = 0x1bf4dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
label_1bf4e0:
    // 0x1bf4e0: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x1bf4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1bf4e4: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1bf4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1bf4e8: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x1bf4e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x1bf4ec: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1bf4ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bf4f0: 0xe23818  mult        $a3, $a3, $v0
    ctx->pc = 0x1bf4f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x1bf4f4: 0x246394d8  addiu       $v1, $v1, -0x6B28
    ctx->pc = 0x1bf4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939864));
    // 0x1bf4f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bf4f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf4fc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1bf4fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bf500: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1bf500u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bf504: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x1bf504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1bf508: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x1BF508u;
    {
        const bool branch_taken_0x1bf508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF508u;
        // 0x1bf50c: 0x8c620014  lw          $v0, 0x14($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf508) {
            ctx->pc = 0x1BF5ACu;
            goto label_1bf5ac;
        }
    }
    ctx->pc = 0x1BF510u;
label_1bf510:
    // 0x1bf510: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x1bf510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x1bf514: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1bf514u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1bf518: 0x8c4543b0  lw          $a1, 0x43B0($v0)
    ctx->pc = 0x1bf518u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6B43B0u));
    // 0x1bf51c: 0x8c831a70  lw          $v1, 0x1A70($a0)
    ctx->pc = 0x1bf51cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x701A70u));
    // 0x1bf520: 0x10a30033  beq         $a1, $v1, . + 4 + (0x33 << 2)
    ctx->pc = 0x1BF520u;
    {
        const bool branch_taken_0x1bf520 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1BF524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF520u;
        // 0x1bf524: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf520) {
            ctx->pc = 0x1BF5F0u;
            goto label_1bf5f0;
        }
    }
    ctx->pc = 0x1BF528u;
    // 0x1bf528: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1bf528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1bf52c: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x1BF52Cu;
    {
        const bool branch_taken_0x1bf52c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF52Cu;
        // 0x1bf530: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf52c) {
            ctx->pc = 0x1BF5F0u;
            goto label_1bf5f0;
        }
    }
    ctx->pc = 0x1BF534u;
    // 0x1bf534: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x1bf534u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x1bf538: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x1BF538u;
    SET_GPR_U32(ctx, 31, 0x1BF540u);
    ctx->pc = 0x1BF53Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF538u;
    // 0x1bf53c: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1BF538u, 0x1BF540u)) {
        return;
    }
    ctx->pc = 0x1BF540u;
label_1bf540:
    // 0x1bf540: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x1BF540u;
    {
        const bool branch_taken_0x1bf540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF540u;
        // 0x1bf544: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf540) {
            ctx->pc = 0x1BF5F0u;
            goto label_1bf5f0;
        }
    }
    ctx->pc = 0x1BF548u;
label_1bf548:
    // 0x1bf548: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1BF548u;
    {
        const bool branch_taken_0x1bf548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF548u;
        // 0x1bf54c: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf548) {
            ctx->pc = 0x1BF5BCu;
            goto label_1bf5bc;
        }
    }
    ctx->pc = 0x1BF550u;
    // 0x1bf550: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1bf550u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1bf554: 0x8c454430  lw          $a1, 0x4430($v0)
    ctx->pc = 0x1bf554u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17456)));
    // 0x1bf558: 0x8c831a70  lw          $v1, 0x1A70($a0)
    ctx->pc = 0x1bf558u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x701A70u));
    // 0x1bf55c: 0x50a30008  beql        $a1, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BF55Cu;
    {
        const bool branch_taken_0x1bf55c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1bf55c) {
            ctx->pc = 0x1BF560u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BF55Cu;
            // 0x1bf560: 0x8e070260  lw          $a3, 0x260($s0) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BF580u;
            goto label_1bf580;
        }
    }
    ctx->pc = 0x1BF564u;
    // 0x1bf564: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1bf564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1bf568: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BF568u;
    {
        const bool branch_taken_0x1bf568 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF568u;
        // 0x1bf56c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf568) {
            ctx->pc = 0x1BF57Cu;
            goto label_1bf57c;
        }
    }
    ctx->pc = 0x1BF570u;
    // 0x1bf570: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x1bf570u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x1bf574: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x1BF574u;
    SET_GPR_U32(ctx, 31, 0x1BF57Cu);
    ctx->pc = 0x1BF578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF574u;
    // 0x1bf578: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1BF574u, 0x1BF57Cu)) {
        return;
    }
    ctx->pc = 0x1BF57Cu;
label_1bf57c:
    // 0x1bf57c: 0x8e070260  lw          $a3, 0x260($s0)
    ctx->pc = 0x1bf57cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
label_1bf580:
    // 0x1bf580: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x1bf580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1bf584: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1bf584u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1bf588: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x1bf588u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x1bf58c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1bf58cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bf590: 0xe23818  mult        $a3, $a3, $v0
    ctx->pc = 0x1bf590u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x1bf594: 0x246394d8  addiu       $v1, $v1, -0x6B28
    ctx->pc = 0x1bf594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939864));
    // 0x1bf598: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bf598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf59c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1bf59cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bf5a0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1bf5a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bf5a4: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x1bf5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1bf5a8: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x1bf5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_1bf5ac:
    // 0x1bf5ac: 0xc0704fc  jal         func_1C13F0
    ctx->pc = 0x1BF5ACu;
    SET_GPR_U32(ctx, 31, 0x1BF5B4u);
    ctx->pc = 0x1BF5B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF5ACu;
    // 0x1bf5b0: 0xae020264  sw          $v0, 0x264($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 612), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C13F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1C13F0u, 0x1BF5ACu, 0x1BF5B4u)) {
        return;
    }
    ctx->pc = 0x1BF5B4u;
label_1bf5b4:
    // 0x1bf5b4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1BF5B4u;
    {
        const bool branch_taken_0x1bf5b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF5B4u;
        // 0x1bf5b8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf5b4) {
            ctx->pc = 0x1BF5F0u;
            goto label_1bf5f0;
        }
    }
    ctx->pc = 0x1BF5BCu;
label_1bf5bc:
    // 0x1bf5bc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x1bf5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x1bf5c0: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1bf5c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1bf5c4: 0x8c4543b0  lw          $a1, 0x43B0($v0)
    ctx->pc = 0x1bf5c4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6B43B0u));
    // 0x1bf5c8: 0x8c831a70  lw          $v1, 0x1A70($a0)
    ctx->pc = 0x1bf5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x701A70u));
    // 0x1bf5cc: 0x10a30008  beq         $a1, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BF5CCu;
    {
        const bool branch_taken_0x1bf5cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1BF5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF5CCu;
        // 0x1bf5d0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf5cc) {
            ctx->pc = 0x1BF5F0u;
            goto label_1bf5f0;
        }
    }
    ctx->pc = 0x1BF5D4u;
    // 0x1bf5d4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1bf5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1bf5d8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BF5D8u;
    {
        const bool branch_taken_0x1bf5d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF5D8u;
        // 0x1bf5dc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf5d8) {
            ctx->pc = 0x1BF5F0u;
            goto label_1bf5f0;
        }
    }
    ctx->pc = 0x1BF5E0u;
    // 0x1bf5e0: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x1bf5e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x1bf5e4: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x1BF5E4u;
    SET_GPR_U32(ctx, 31, 0x1BF5ECu);
    ctx->pc = 0x1BF5E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF5E4u;
    // 0x1bf5e8: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1BF5E4u, 0x1BF5ECu)) {
        return;
    }
    ctx->pc = 0x1BF5ECu;
label_1bf5ec:
    // 0x1bf5ec: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1bf5ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1bf5f0:
    // 0x1bf5f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1bf5f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bf5f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1BF5F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BF5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF5F4u;
        // 0x1bf5f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BF5F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BF5FCu;
    // 0x1bf5fc: 0x0  nop
    ctx->pc = 0x1bf5fcu;
    // NOP
    ctx->pc = 0x1bf600u;
}
