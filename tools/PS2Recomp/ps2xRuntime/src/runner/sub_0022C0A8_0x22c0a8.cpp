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

// Function: sub_0022C0A8
// Address: 0x22c0a8 - 0x22c270
void sub_0022C0A8_0x22c0a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022C0A8_0x22c0a8");
#endif

    switch (ctx->pc) {
        case 0x22c1c0u: goto label_22c1c0;
        case 0x22c234u: goto label_22c234;
        default: break;
    }

    ctx->pc = 0x22c0a8u;

label_22c0a8:
    // 0x22c0a8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x22c0a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x22c0ac: 0x80782d  daddu       $t7, $a0, $zero
    ctx->pc = 0x22c0acu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c0b0: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x22c0b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x22c0b4: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x22c0b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x22c0b8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x22c0b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c0bc: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x22c0bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x22c0c0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x22c0c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c0c4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x22c0c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x22c0c8: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x22c0c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c0cc: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x22c0ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x22c0d0: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x22c0d0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c0d4: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x22c0d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x22c0d8: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x22c0d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x22c0dc: 0x11e00059  beqz        $t7, . + 4 + (0x59 << 2)
    ctx->pc = 0x22C0DCu;
    {
        const bool branch_taken_0x22c0dc = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C0DCu;
        // 0x22c0e0: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c0dc) {
            ctx->pc = 0x22C244u;
            goto label_22c244;
        }
    }
    ctx->pc = 0x22C0E4u;
    // 0x22c0e4: 0x8e4d0000  lw          $t5, 0x0($s2)
    ctx->pc = 0x22c0e4u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x22c0e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22c0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22c0ec: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x22c0ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x22c0f0: 0x2221004  sllv        $v0, $v0, $s1
    ctx->pc = 0x22c0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 17) & 0x1F));
    // 0x22c0f4: 0x8e4e0004  lw          $t6, 0x4($s2)
    ctx->pc = 0x22c0f4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x22c0f8: 0x1a24821  addu        $t1, $t5, $v0
    ctx->pc = 0x22c0f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x22c0fc: 0x8e4c0008  lw          $t4, 0x8($s2)
    ctx->pc = 0x22c0fcu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x22c100: 0x1255023  subu        $t2, $t1, $a1
    ctx->pc = 0x22c100u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x22c104: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x22c104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x22c108: 0x1c24021  addu        $t0, $t6, $v0
    ctx->pc = 0x22c108u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x22c10c: 0x8e4b000c  lw          $t3, 0xC($s2)
    ctx->pc = 0x22c10cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x22c110: 0x1823821  addu        $a3, $t4, $v0
    ctx->pc = 0x22c110u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x22c114: 0x8e660004  lw          $a2, 0x4($s3)
    ctx->pc = 0x22c114u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x22c118: 0xe32823  subu        $a1, $a3, $v1
    ctx->pc = 0x22c118u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x22c11c: 0x8e64000c  lw          $a0, 0xC($s3)
    ctx->pc = 0x22c11cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x22c120: 0x1621021  addu        $v0, $t3, $v0
    ctx->pc = 0x22c120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x22c124: 0x1063023  subu        $a2, $t0, $a2
    ctx->pc = 0x22c124u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x22c128: 0xafad0000  sw          $t5, 0x0($sp)
    ctx->pc = 0x22c128u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 13));
    // 0x22c12c: 0x441823  subu        $v1, $v0, $a0
    ctx->pc = 0x22c12cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x22c130: 0xafae0004  sw          $t6, 0x4($sp)
    ctx->pc = 0x22c130u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 14));
    // 0x22c134: 0xafac0008  sw          $t4, 0x8($sp)
    ctx->pc = 0x22c134u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 12));
    // 0x22c138: 0xafab000c  sw          $t3, 0xC($sp)
    ctx->pc = 0x22c138u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 11));
    // 0x22c13c: 0xafa90010  sw          $t1, 0x10($sp)
    ctx->pc = 0x22c13cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 9));
    // 0x22c140: 0xafa80014  sw          $t0, 0x14($sp)
    ctx->pc = 0x22c140u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 8));
    // 0x22c144: 0xafa70018  sw          $a3, 0x18($sp)
    ctx->pc = 0x22c144u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 7));
    // 0x22c148: 0x1940003e  blez        $t2, . + 4 + (0x3E << 2)
    ctx->pc = 0x22C148u;
    {
        const bool branch_taken_0x22c148 = (GPR_S64(ctx, 10) <= 0);
        ctx->pc = 0x22C14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C148u;
        // 0x22c14c: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c148) {
            ctx->pc = 0x22C244u;
            goto label_22c244;
        }
    }
    ctx->pc = 0x22C150u;
    // 0x22c150: 0x18c0003d  blez        $a2, . + 4 + (0x3D << 2)
    ctx->pc = 0x22C150u;
    {
        const bool branch_taken_0x22c150 = (GPR_S64(ctx, 6) <= 0);
        ctx->pc = 0x22C154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C150u;
        // 0x22c154: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c150) {
            ctx->pc = 0x22C248u;
            goto label_22c248;
        }
    }
    ctx->pc = 0x22C158u;
    // 0x22c158: 0x58a0003c  blezl       $a1, . + 4 + (0x3C << 2)
    ctx->pc = 0x22C158u;
    {
        const bool branch_taken_0x22c158 = (GPR_S64(ctx, 5) <= 0);
        if (branch_taken_0x22c158) {
            ctx->pc = 0x22C15Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22C158u;
            // 0x22c15c: 0x7bb10090  lq          $s1, 0x90($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22C24Cu;
            goto label_22c24c;
        }
    }
    ctx->pc = 0x22C160u;
    // 0x22c160: 0x5860003a  blezl       $v1, . + 4 + (0x3A << 2)
    ctx->pc = 0x22C160u;
    {
        const bool branch_taken_0x22c160 = (GPR_S64(ctx, 3) <= 0);
        if (branch_taken_0x22c160) {
            ctx->pc = 0x22C164u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22C160u;
            // 0x22c164: 0x7bb10090  lq          $s1, 0x90($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22C24Cu;
            goto label_22c24c;
        }
    }
    ctx->pc = 0x22C168u;
    // 0x22c168: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x22c168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x22c16c: 0x8e640014  lw          $a0, 0x14($s3)
    ctx->pc = 0x22c16cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x22c170: 0x8e650018  lw          $a1, 0x18($s3)
    ctx->pc = 0x22c170u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x22c174: 0x1a25023  subu        $t2, $t5, $v0
    ctx->pc = 0x22c174u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x22c178: 0x8e63001c  lw          $v1, 0x1C($s3)
    ctx->pc = 0x22c178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x22c17c: 0x1c43023  subu        $a2, $t6, $a0
    ctx->pc = 0x22c17cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 4)));
    // 0x22c180: 0x1852823  subu        $a1, $t4, $a1
    ctx->pc = 0x22c180u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
    // 0x22c184: 0x5410030  bgez        $t2, . + 4 + (0x30 << 2)
    ctx->pc = 0x22C184u;
    {
        const bool branch_taken_0x22c184 = (GPR_S64(ctx, 10) >= 0);
        ctx->pc = 0x22C188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C184u;
        // 0x22c188: 0x1631823  subu        $v1, $t3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c184) {
            ctx->pc = 0x22C248u;
            goto label_22c248;
        }
    }
    ctx->pc = 0x22C18Cu;
    // 0x22c18c: 0x4c3002f  bgezl       $a2, . + 4 + (0x2F << 2)
    ctx->pc = 0x22C18Cu;
    {
        const bool branch_taken_0x22c18c = (GPR_S64(ctx, 6) >= 0);
        if (branch_taken_0x22c18c) {
            ctx->pc = 0x22C190u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22C18Cu;
            // 0x22c190: 0x7bb10090  lq          $s1, 0x90($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22C24Cu;
            goto label_22c24c;
        }
    }
    ctx->pc = 0x22C194u;
    // 0x22c194: 0x4a3002d  bgezl       $a1, . + 4 + (0x2D << 2)
    ctx->pc = 0x22C194u;
    {
        const bool branch_taken_0x22c194 = (GPR_S64(ctx, 5) >= 0);
        if (branch_taken_0x22c194) {
            ctx->pc = 0x22C198u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22C194u;
            // 0x22c198: 0x7bb10090  lq          $s1, 0x90($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22C24Cu;
            goto label_22c24c;
        }
    }
    ctx->pc = 0x22C19Cu;
    // 0x22c19c: 0x463002b  bgezl       $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x22C19Cu;
    {
        const bool branch_taken_0x22c19c = (GPR_S64(ctx, 3) >= 0);
        if (branch_taken_0x22c19c) {
            ctx->pc = 0x22C1A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22C19Cu;
            // 0x22c1a0: 0x7bb10090  lq          $s1, 0x90($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22C24Cu;
            goto label_22c24c;
        }
    }
    ctx->pc = 0x22C1A4u;
    // 0x22c1a4: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x22C1A4u;
    {
        const bool branch_taken_0x22c1a4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x22C1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C1A4u;
        // 0x22c1a8: 0x25f4001c  addiu       $s4, $t7, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 15), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c1a4) {
            ctx->pc = 0x22C1B4u;
            goto label_22c1b4;
        }
    }
    ctx->pc = 0x22C1ACu;
    // 0x22c1ac: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x22C1ACu;
    {
        const bool branch_taken_0x22c1ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C1ACu;
        // 0x22c1b0: 0xa1f50018  sb          $s5, 0x18($t7) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 15), 24), (uint8_t)GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c1ac) {
            ctx->pc = 0x22C248u;
            goto label_22c248;
        }
    }
    ctx->pc = 0x22C1B4u;
label_22c1b4:
    // 0x22c1b4: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x22c1b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x22c1b8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x22c1b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c1bc: 0x27b60020  addiu       $s6, $sp, 0x20
    ctx->pc = 0x22c1bcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_22c1c0:
    // 0x22c1c0: 0x102043  sra         $a0, $s0, 1
    ctx->pc = 0x22c1c0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 16), 1));
    // 0x22c1c4: 0x8e480008  lw          $t0, 0x8($s2)
    ctx->pc = 0x22c1c4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x22c1c8: 0x1010c3  sra         $v0, $s0, 3
    ctx->pc = 0x22c1c8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 16), 3));
    // 0x22c1cc: 0x101883  sra         $v1, $s0, 2
    ctx->pc = 0x22c1ccu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 16), 2));
    // 0x22c1d0: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x22c1d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x22c1d4: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x22c1d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x22c1d8: 0x8e470004  lw          $a3, 0x4($s2)
    ctx->pc = 0x22c1d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x22c1dc: 0x2242004  sllv        $a0, $a0, $s1
    ctx->pc = 0x22c1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 17) & 0x1F));
    // 0x22c1e0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x22c1e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x22c1e4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x22c1e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x22c1e8: 0x8e49000c  lw          $t1, 0xC($s2)
    ctx->pc = 0x22c1e8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x22c1ec: 0x1044021  addu        $t0, $t0, $a0
    ctx->pc = 0x22c1ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x22c1f0: 0x2221004  sllv        $v0, $v0, $s1
    ctx->pc = 0x22c1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 17) & 0x1F));
    // 0x22c1f4: 0x32050001  andi        $a1, $s0, 0x1
    ctx->pc = 0x22c1f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x22c1f8: 0x2231804  sllv        $v1, $v1, $s1
    ctx->pc = 0x22c1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 17) & 0x1F));
    // 0x22c1fc: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x22c1fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x22c200: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x22c200u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x22c204: 0x2252804  sllv        $a1, $a1, $s1
    ctx->pc = 0x22c204u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 17) & 0x1F));
    // 0x22c208: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x22c208u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x22c20c: 0x1254821  addu        $t1, $t1, $a1
    ctx->pc = 0x22c20cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x22c210: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x22c210u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x22c214: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x22c214u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c218: 0xafa70024  sw          $a3, 0x24($sp)
    ctx->pc = 0x22c218u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 7));
    // 0x22c21c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x22c21cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c220: 0xafa80028  sw          $t0, 0x28($sp)
    ctx->pc = 0x22c220u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 8));
    // 0x22c224: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x22c224u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c228: 0xafa9002c  sw          $t1, 0x2C($sp)
    ctx->pc = 0x22c228u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 9));
    // 0x22c22c: 0xc08b02a  jal         func_22C0A8
    ctx->pc = 0x22C22Cu;
    SET_GPR_U32(ctx, 31, 0x22C234u);
    ctx->pc = 0x22C230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C22Cu;
    // 0x22c230: 0x2a0402d  daddu       $t0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C0A8u;
    goto label_22c0a8;
    ctx->pc = 0x22C234u;
label_22c234:
    // 0x22c234: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x22c234u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x22c238: 0x2a020010  slti        $v0, $s0, 0x10
    ctx->pc = 0x22c238u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x22c23c: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x22C23Cu;
    {
        const bool branch_taken_0x22c23c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22C240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C23Cu;
        // 0x22c240: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c23c) {
            ctx->pc = 0x22C1C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22c1c0;
        }
    }
    ctx->pc = 0x22C244u;
label_22c244:
    // 0x22c244: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x22c244u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_22c248:
    // 0x22c248: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x22c248u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_22c24c:
    // 0x22c24c: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x22c24cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x22c250: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x22c250u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x22c254: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x22c254u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x22c258: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x22c258u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22c25c: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x22c25cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22c260: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x22c260u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22c264: 0x3e00008  jr          $ra
    ctx->pc = 0x22C264u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22C268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C264u;
        // 0x22c268: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22C264u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22C26Cu;
    // 0x22c26c: 0x0  nop
    ctx->pc = 0x22c26cu;
    // NOP
    ctx->pc = 0x22c270u;
}
