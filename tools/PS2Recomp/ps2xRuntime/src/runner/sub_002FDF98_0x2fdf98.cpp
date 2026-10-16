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

// Function: sub_002FDF98
// Address: 0x2fdf98 - 0x2fe6a0
void sub_002FDF98_0x2fdf98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FDF98_0x2fdf98");
#endif

    switch (ctx->pc) {
        case 0x2fe0b4u: goto label_2fe0b4;
        case 0x2fe0f4u: goto label_2fe0f4;
        case 0x2fe120u: goto label_2fe120;
        case 0x2fe160u: goto label_2fe160;
        case 0x2fe19cu: goto label_2fe19c;
        case 0x2fe1dcu: goto label_2fe1dc;
        case 0x2fe224u: goto label_2fe224;
        case 0x2fe328u: goto label_2fe328;
        case 0x2fe3c8u: goto label_2fe3c8;
        case 0x2fe410u: goto label_2fe410;
        case 0x2fe460u: goto label_2fe460;
        case 0x2fe478u: goto label_2fe478;
        case 0x2fe51cu: goto label_2fe51c;
        case 0x2fe55cu: goto label_2fe55c;
        case 0x2fe5b4u: goto label_2fe5b4;
        case 0x2fe60cu: goto label_2fe60c;
        case 0x2fe654u: goto label_2fe654;
        case 0x2fe66cu: goto label_2fe66c;
        default: break;
    }

    ctx->pc = 0x2fdf98u;

    // 0x2fdf98: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x2fdf98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x2fdf9c: 0x24030140  addiu       $v1, $zero, 0x140
    ctx->pc = 0x2fdf9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x2fdfa0: 0xffbe00d0  sd          $fp, 0xD0($sp)
    ctx->pc = 0x2fdfa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 30));
    // 0x2fdfa4: 0xffb600b0  sd          $s6, 0xB0($sp)
    ctx->pc = 0x2fdfa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 22));
    // 0x2fdfa8: 0x140f02d  daddu       $fp, $t2, $zero
    ctx->pc = 0x2fdfa8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fdfac: 0xffb500a0  sd          $s5, 0xA0($sp)
    ctx->pc = 0x2fdfacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 21));
    // 0x2fdfb0: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x2fdfb0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fdfb4: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x2fdfb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
    // 0x2fdfb8: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x2fdfb8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fdfbc: 0xffb30080  sd          $s3, 0x80($sp)
    ctx->pc = 0x2fdfbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 19));
    // 0x2fdfc0: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x2fdfc0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fdfc4: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x2fdfc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x2fdfc8: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2fdfc8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fdfcc: 0xffb10060  sd          $s1, 0x60($sp)
    ctx->pc = 0x2fdfccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 17));
    // 0x2fdfd0: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x2fdfd0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fdfd4: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x2fdfd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x2fdfd8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2fdfd8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fdfdc: 0xffbf00e0  sd          $ra, 0xE0($sp)
    ctx->pc = 0x2fdfdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 31));
    // 0x2fdfe0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2fdfe0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fdfe4: 0xffb700c0  sd          $s7, 0xC0($sp)
    ctx->pc = 0x2fdfe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 23));
    // 0x2fdfe8: 0x8e220820  lw          $v0, 0x820($s1)
    ctx->pc = 0x2fdfe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2080)));
    // 0x2fdfec: 0xafa70040  sw          $a3, 0x40($sp)
    ctx->pc = 0x2fdfecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 7));
    // 0x2fdff0: 0x432018  mult        $a0, $v0, $v1
    ctx->pc = 0x2fdff0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2fdff4: 0x30ec0008  andi        $t4, $a3, 0x8
    ctx->pc = 0x2fdff4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)8);
    // 0x2fdff8: 0x911021  addu        $v0, $a0, $s1
    ctx->pc = 0x2fdff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x2fdffc: 0x15800005  bnez        $t4, . + 4 + (0x5 << 2)
    ctx->pc = 0x2FDFFCu;
    {
        const bool branch_taken_0x2fdffc = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FE000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDFFCu;
        // 0x2fe000: 0xac4006cc  sw          $zero, 0x6CC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1740), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fdffc) {
            ctx->pc = 0x2FE014u;
            goto label_2fe014;
        }
    }
    ctx->pc = 0x2FE004u;
    // 0x2fe004: 0x8e230160  lw          $v1, 0x160($s1)
    ctx->pc = 0x2fe004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 352)));
    // 0x2fe008: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2fe008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2fe00c: 0x1462011c  bne         $v1, $v0, . + 4 + (0x11C << 2)
    ctx->pc = 0x2FE00Cu;
    {
        const bool branch_taken_0x2fe00c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2FE010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE00Cu;
        // 0x2fe010: 0x8fa40040  lw          $a0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe00c) {
            ctx->pc = 0x2FE480u;
            goto label_2fe480;
        }
    }
    ctx->pc = 0x2FE014u;
label_2fe014:
    // 0x2fe014: 0x8e230184  lw          $v1, 0x184($s1)
    ctx->pc = 0x2fe014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
    // 0x2fe018: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2fe018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2fe01c: 0x14620083  bne         $v1, $v0, . + 4 + (0x83 << 2)
    ctx->pc = 0x2FE01Cu;
    {
        const bool branch_taken_0x2fe01c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2FE020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE01Cu;
        // 0x2fe020: 0x38620002  xori        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe01c) {
            ctx->pc = 0x2FE22Cu;
            goto label_2fe22c;
        }
    }
    ctx->pc = 0x2FE024u;
    // 0x2fe024: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2fe024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2fe028: 0x52820004  beql        $s4, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FE028u;
    {
        const bool branch_taken_0x2fe028 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x2fe028) {
            ctx->pc = 0x2FE02Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FE028u;
            // 0x2fe02c: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FE03Cu;
            goto label_2fe03c;
        }
    }
    ctx->pc = 0x2FE030u;
    // 0x2fe030: 0x1580000f  bnez        $t4, . + 4 + (0xF << 2)
    ctx->pc = 0x2FE030u;
    {
        const bool branch_taken_0x2fe030 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fe030) {
            ctx->pc = 0x2FE070u;
            goto label_2fe070;
        }
    }
    ctx->pc = 0x2FE038u;
    // 0x2fe038: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2fe038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2fe03c:
    // 0x2fe03c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2fe03cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe040: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x2fe040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2fe044: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2fe044u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe048: 0x8e2501c8  lw          $a1, 0x1C8($s1)
    ctx->pc = 0x2fe048u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 456)));
    // 0x2fe04c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2fe04cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe050: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2fe050u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2fe054: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2fe054u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe058: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x2fe058u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x2fe05c: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x2fe05cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2fe060: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x2fe060u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x2fe064: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x2fe064u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe068: 0x100000fb  b           . + 4 + (0xFB << 2)
    ctx->pc = 0x2FE068u;
    {
        const bool branch_taken_0x2fe068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE068u;
        // 0x2fe06c: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe068) {
            ctx->pc = 0x2FE458u;
            goto label_2fe458;
        }
    }
    ctx->pc = 0x2FE070u;
label_2fe070:
    // 0x2fe070: 0x16930022  bne         $s4, $s3, . + 4 + (0x22 << 2)
    ctx->pc = 0x2FE070u;
    {
        const bool branch_taken_0x2fe070 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 19));
        ctx->pc = 0x2FE074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE070u;
        // 0x2fe074: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe070) {
            ctx->pc = 0x2FE0FCu;
            goto label_2fe0fc;
        }
    }
    ctx->pc = 0x2FE078u;
    // 0x2fe078: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2fe078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2fe07c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2fe07cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2fe080: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2fe080u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe084: 0x8e2501c8  lw          $a1, 0x1C8($s1)
    ctx->pc = 0x2fe084u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 456)));
    // 0x2fe088: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2fe088u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2fe08c: 0x8fc60000  lw          $a2, 0x0($fp)
    ctx->pc = 0x2fe08cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2fe090: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2fe090u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe094: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x2fe094u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x2fe098: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x2fe098u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2fe09c: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x2fe09cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x2fe0a0: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x2fe0a0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe0a4: 0xafb40010  sw          $s4, 0x10($sp)
    ctx->pc = 0x2fe0a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 20));
    // 0x2fe0a8: 0x2c0582d  daddu       $t3, $s6, $zero
    ctx->pc = 0x2fe0a8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe0ac: 0xc0bfa3c  jal         func_2FE8F0
    ctx->pc = 0x2FE0ACu;
    SET_GPR_U32(ctx, 31, 0x2FE0B4u);
    ctx->pc = 0x2FE0B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE0ACu;
    // 0x2fe0b0: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE8F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2FE8F0u, 0x2FE0ACu, 0x2FE0B4u)) {
        return;
    }
    ctx->pc = 0x2FE0B4u;
label_2fe0b4:
    // 0x2fe0b4: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x2fe0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x2fe0b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2fe0b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe0bc: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x2fe0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x2fe0c0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2fe0c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fe0c4: 0x8e2501c8  lw          $a1, 0x1C8($s1)
    ctx->pc = 0x2fe0c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 456)));
    // 0x2fe0c8: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2fe0c8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2fe0cc: 0x8fc60008  lw          $a2, 0x8($fp)
    ctx->pc = 0x2fe0ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2fe0d0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2fe0d0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe0d4: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x2fe0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x2fe0d8: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x2fe0d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2fe0dc: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x2fe0dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x2fe0e0: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x2fe0e0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe0e4: 0xafb40010  sw          $s4, 0x10($sp)
    ctx->pc = 0x2fe0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 20));
    // 0x2fe0e8: 0x2c0582d  daddu       $t3, $s6, $zero
    ctx->pc = 0x2fe0e8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe0ec: 0xc0bfa3c  jal         func_2FE8F0
    ctx->pc = 0x2FE0ECu;
    SET_GPR_U32(ctx, 31, 0x2FE0F4u);
    ctx->pc = 0x2FE0F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE0ECu;
    // 0x2fe0f0: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE8F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2FE8F0u, 0x2FE0ECu, 0x2FE0F4u)) {
        return;
    }
    ctx->pc = 0x2FE0F4u;
label_2fe0f4:
    // 0x2fe0f4: 0x100000e1  b           . + 4 + (0xE1 << 2)
    ctx->pc = 0x2FE0F4u;
    {
        const bool branch_taken_0x2fe0f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE0F4u;
        // 0x2fe0f8: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe0f4) {
            ctx->pc = 0x2FE47Cu;
            goto label_2fe47c;
        }
    }
    ctx->pc = 0x2FE0FCu;
label_2fe0fc:
    // 0x2fe0fc: 0x16830045  bne         $s4, $v1, . + 4 + (0x45 << 2)
    ctx->pc = 0x2FE0FCu;
    {
        const bool branch_taken_0x2fe0fc = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        ctx->pc = 0x2FE100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE0FCu;
        // 0x2fe100: 0x3c05006b  lui         $a1, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe0fc) {
            ctx->pc = 0x2FE214u;
            goto label_2fe214;
        }
    }
    ctx->pc = 0x2FE104u;
    // 0x2fe104: 0x8e480004  lw          $t0, 0x4($s2)
    ctx->pc = 0x2fe104u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2fe108: 0x160302d  daddu       $a2, $t3, $zero
    ctx->pc = 0x2fe108u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe10c: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x2fe10cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2fe110: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2fe110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe114: 0x84043  sra         $t0, $t0, 1
    ctx->pc = 0x2fe114u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 1));
    // 0x2fe118: 0xc0bf784  jal         func_2FDE10
    ctx->pc = 0x2FE118u;
    SET_GPR_U32(ctx, 31, 0x2FE120u);
    ctx->pc = 0x2FE11Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE118u;
    // 0x2fe11c: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDE10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2FDE10u, 0x2FE118u, 0x2FE120u)) {
        return;
    }
    ctx->pc = 0x2FE120u;
label_2fe120:
    // 0x2fe120: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2fe120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2fe124: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2fe124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe128: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2fe128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2fe12c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2fe12cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe130: 0x8e2501c8  lw          $a1, 0x1C8($s1)
    ctx->pc = 0x2fe130u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 456)));
    // 0x2fe134: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2fe134u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2fe138: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x2fe138u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x2fe13c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2fe13cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe140: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x2fe140u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x2fe144: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2fe144u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe148: 0xafb30010  sw          $s3, 0x10($sp)
    ctx->pc = 0x2fe148u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 19));
    // 0x2fe14c: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x2fe14cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2fe150: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x2fe150u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x2fe154: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x2fe154u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe158: 0xc0bfa3c  jal         func_2FE8F0
    ctx->pc = 0x2FE158u;
    SET_GPR_U32(ctx, 31, 0x2FE160u);
    ctx->pc = 0x2FE15Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE158u;
    // 0x2fe15c: 0x2c0582d  daddu       $t3, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE8F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2FE8F0u, 0x2FE158u, 0x2FE160u)) {
        return;
    }
    ctx->pc = 0x2FE160u;
label_2fe160:
    // 0x2fe160: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2fe160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2fe164: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2fe164u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe168: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x2fe168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x2fe16c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2fe16cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fe170: 0x8e2501c8  lw          $a1, 0x1C8($s1)
    ctx->pc = 0x2fe170u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 456)));
    // 0x2fe174: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2fe174u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe178: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2fe178u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2fe17c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2fe17cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe180: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x2fe180u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x2fe184: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x2fe184u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2fe188: 0xafb30010  sw          $s3, 0x10($sp)
    ctx->pc = 0x2fe188u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 19));
    // 0x2fe18c: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x2fe18cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe190: 0xafb30018  sw          $s3, 0x18($sp)
    ctx->pc = 0x2fe190u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 19));
    // 0x2fe194: 0xc0bfa3c  jal         func_2FE8F0
    ctx->pc = 0x2FE194u;
    SET_GPR_U32(ctx, 31, 0x2FE19Cu);
    ctx->pc = 0x2FE198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE194u;
    // 0x2fe198: 0x2c0582d  daddu       $t3, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE8F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2FE8F0u, 0x2FE194u, 0x2FE19Cu)) {
        return;
    }
    ctx->pc = 0x2FE19Cu;
label_2fe19c:
    // 0x2fe19c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2fe19cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2fe1a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2fe1a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe1a4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2fe1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2fe1a8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2fe1a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fe1ac: 0x8e2501c8  lw          $a1, 0x1C8($s1)
    ctx->pc = 0x2fe1acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 456)));
    // 0x2fe1b0: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2fe1b0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2fe1b4: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x2fe1b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x2fe1b8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2fe1b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fe1bc: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x2fe1bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x2fe1c0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2fe1c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe1c4: 0xafb30010  sw          $s3, 0x10($sp)
    ctx->pc = 0x2fe1c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 19));
    // 0x2fe1c8: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x2fe1c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2fe1cc: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x2fe1ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x2fe1d0: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x2fe1d0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe1d4: 0xc0bfa3c  jal         func_2FE8F0
    ctx->pc = 0x2FE1D4u;
    SET_GPR_U32(ctx, 31, 0x2FE1DCu);
    ctx->pc = 0x2FE1D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE1D4u;
    // 0x2fe1d8: 0x2c0582d  daddu       $t3, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE8F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2FE8F0u, 0x2FE1D4u, 0x2FE1DCu)) {
        return;
    }
    ctx->pc = 0x2FE1DCu;
label_2fe1dc:
    // 0x2fe1dc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2fe1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2fe1e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2fe1e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe1e4: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x2fe1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x2fe1e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2fe1e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe1ec: 0x8e2501c8  lw          $a1, 0x1C8($s1)
    ctx->pc = 0x2fe1ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 456)));
    // 0x2fe1f0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2fe1f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fe1f4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2fe1f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2fe1f8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2fe1f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe1fc: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x2fe1fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x2fe200: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x2fe200u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2fe204: 0xafb30018  sw          $s3, 0x18($sp)
    ctx->pc = 0x2fe204u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 19));
    // 0x2fe208: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x2fe208u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe20c: 0x10000092  b           . + 4 + (0x92 << 2)
    ctx->pc = 0x2FE20Cu;
    {
        const bool branch_taken_0x2fe20c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE20Cu;
        // 0x2fe210: 0xafb30010  sw          $s3, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe20c) {
            ctx->pc = 0x2FE458u;
            goto label_2fe458;
        }
    }
    ctx->pc = 0x2FE214u;
label_2fe214:
    // 0x2fe214: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2fe214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe218: 0x24a507b0  addiu       $a1, $a1, 0x7B0
    ctx->pc = 0x2fe218u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1968));
    // 0x2fe21c: 0xc0bf772  jal         func_2FDDC8
    ctx->pc = 0x2FE21Cu;
    SET_GPR_U32(ctx, 31, 0x2FE224u);
    ctx->pc = 0x2FE220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE21Cu;
    // 0x2fe220: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDDC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2FDDC8u, 0x2FE21Cu, 0x2FE224u)) {
        return;
    }
    ctx->pc = 0x2FE224u;
label_2fe224:
    // 0x2fe224: 0x10000095  b           . + 4 + (0x95 << 2)
    ctx->pc = 0x2FE224u;
    {
        const bool branch_taken_0x2fe224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE224u;
        // 0x2fe228: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe224) {
            ctx->pc = 0x2FE47Cu;
            goto label_2fe47c;
        }
    }
    ctx->pc = 0x2FE22Cu;
label_2fe22c:
    // 0x2fe22c: 0x8e2701d8  lw          $a3, 0x1D8($s1)
    ctx->pc = 0x2fe22cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 472)));
    // 0x2fe230: 0x8e2501e8  lw          $a1, 0x1E8($s1)
    ctx->pc = 0x2fe230u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 488)));
    // 0x2fe234: 0x2c570001  sltiu       $s7, $v0, 0x1
    ctx->pc = 0x2fe234u;
    SET_GPR_U64(ctx, 23, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2fe238: 0x8e2401dc  lw          $a0, 0x1DC($s1)
    ctx->pc = 0x2fe238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 476)));
    // 0x2fe23c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2fe23cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2fe240: 0x8e2301ec  lw          $v1, 0x1EC($s1)
    ctx->pc = 0x2fe240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 492)));
    // 0x2fe244: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2fe244u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe248: 0x8e220160  lw          $v0, 0x160($s1)
    ctx->pc = 0x2fe248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 352)));
    // 0x2fe24c: 0xafa70030  sw          $a3, 0x30($sp)
    ctx->pc = 0x2fe24cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 7));
    // 0x2fe250: 0xafa50034  sw          $a1, 0x34($sp)
    ctx->pc = 0x2fe250u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 5));
    // 0x2fe254: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x2fe254u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x2fe258: 0x14460007  bne         $v0, $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x2FE258u;
    {
        const bool branch_taken_0x2fe258 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x2FE25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE258u;
        // 0x2fe25c: 0xafa3003c  sw          $v1, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe258) {
            ctx->pc = 0x2FE278u;
            goto label_2fe278;
        }
    }
    ctx->pc = 0x2FE260u;
    // 0x2fe260: 0x8e220130  lw          $v0, 0x130($s1)
    ctx->pc = 0x2fe260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x2fe264: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2FE264u;
    {
        const bool branch_taken_0x2fe264 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE264u;
        // 0x2fe268: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe264) {
            ctx->pc = 0x2FE27Cu;
            goto label_2fe27c;
        }
    }
    ctx->pc = 0x2FE26Cu;
    // 0x2fe26c: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x2fe26cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2fe270: 0x2e21026  xor         $v0, $s7, $v0
    ctx->pc = 0x2fe270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) ^ GPR_U64(ctx, 2));
    // 0x2fe274: 0x2982b  sltu        $s3, $zero, $v0
    ctx->pc = 0x2fe274u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2fe278:
    // 0x2fe278: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2fe278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2fe27c:
    // 0x2fe27c: 0x52820004  beql        $s4, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FE27Cu;
    {
        const bool branch_taken_0x2fe27c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x2fe27c) {
            ctx->pc = 0x2FE280u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FE27Cu;
            // 0x2fe280: 0x8fc20000  lw          $v0, 0x0($fp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FE290u;
            goto label_2fe290;
        }
    }
    ctx->pc = 0x2FE284u;
    // 0x2fe284: 0x15800011  bnez        $t4, . + 4 + (0x11 << 2)
    ctx->pc = 0x2FE284u;
    {
        const bool branch_taken_0x2fe284 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FE288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE284u;
        // 0x2fe288: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe284) {
            ctx->pc = 0x2FE2CCu;
            goto label_2fe2cc;
        }
    }
    ctx->pc = 0x2FE28Cu;
    // 0x2fe28c: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x2fe28cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_2fe290:
    // 0x2fe290: 0x1318c0  sll         $v1, $s3, 3
    ctx->pc = 0x2fe290u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x2fe294: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x2fe294u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2fe298: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2fe298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe29c: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x2fe29cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2fe2a0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2fe2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2fe2a4: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x2fe2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    // 0x2fe2a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2fe2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2fe2ac: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x2fe2acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x2fe2b0: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x2fe2b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
    // 0x2fe2b4: 0x8c650030  lw          $a1, 0x30($v1)
    ctx->pc = 0x2fe2b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x2fe2b8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2fe2b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe2bc: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x2fe2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x2fe2c0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2fe2c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe2c4: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x2FE2C4u;
    {
        const bool branch_taken_0x2fe2c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE2C4u;
        // 0x2fe2c8: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe2c4) {
            ctx->pc = 0x2FE44Cu;
            goto label_2fe44c;
        }
    }
    ctx->pc = 0x2FE2CCu;
label_2fe2cc:
    // 0x2fe2cc: 0x16820033  bne         $s4, $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x2FE2CCu;
    {
        const bool branch_taken_0x2fe2cc = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x2FE2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE2CCu;
        // 0x2fe2d0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe2cc) {
            ctx->pc = 0x2FE39Cu;
            goto label_2fe39c;
        }
    }
    ctx->pc = 0x2FE2D4u;
    // 0x2fe2d4: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x2fe2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2fe2d8: 0x1328c0  sll         $a1, $s3, 3
    ctx->pc = 0x2fe2d8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x2fe2dc: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x2fe2dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2fe2e0: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x2fe2e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2fe2e4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2fe2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2fe2e8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2fe2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2fe2ec: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2fe2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2fe2f0: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2fe2f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2fe2f4: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x2fe2f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x2fe2f8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2fe2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2fe2fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2fe2fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe300: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2fe300u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe304: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2fe304u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2fe308: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2fe308u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe30c: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x2fe30cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x2fe310: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2fe310u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe314: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x2fe314u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x2fe318: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x2fe318u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2fe31c: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x2fe31cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe320: 0xc0bfa3c  jal         func_2FE8F0
    ctx->pc = 0x2FE320u;
    SET_GPR_U32(ctx, 31, 0x2FE328u);
    ctx->pc = 0x2FE324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE320u;
    // 0x2fe324: 0x2c0582d  daddu       $t3, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE8F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2FE8F0u, 0x2FE320u, 0x2FE328u)) {
        return;
    }
    ctx->pc = 0x2FE328u;
label_2fe328:
    // 0x2fe328: 0x8e220160  lw          $v0, 0x160($s1)
    ctx->pc = 0x2fe328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 352)));
    // 0x2fe32c: 0x14540008  bne         $v0, $s4, . + 4 + (0x8 << 2)
    ctx->pc = 0x2FE32Cu;
    {
        const bool branch_taken_0x2fe32c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x2FE330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE32Cu;
        // 0x2fe330: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe32c) {
            ctx->pc = 0x2FE350u;
            goto label_2fe350;
        }
    }
    ctx->pc = 0x2FE334u;
    // 0x2fe334: 0x8e220130  lw          $v0, 0x130($s1)
    ctx->pc = 0x2fe334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x2fe338: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FE338u;
    {
        const bool branch_taken_0x2fe338 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE338u;
        // 0x2fe33c: 0x8fc30008  lw          $v1, 0x8($fp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe338) {
            ctx->pc = 0x2FE354u;
            goto label_2fe354;
        }
    }
    ctx->pc = 0x2FE340u;
    // 0x2fe340: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2fe340u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fe344: 0x2e31026  xor         $v0, $s7, $v1
    ctx->pc = 0x2fe344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) ^ GPR_U64(ctx, 3));
    // 0x2fe348: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2FE348u;
    {
        const bool branch_taken_0x2fe348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE348u;
        // 0x2fe34c: 0x2980a  movz        $s3, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe348) {
            ctx->pc = 0x2FE354u;
            goto label_2fe354;
        }
    }
    ctx->pc = 0x2FE350u;
label_2fe350:
    // 0x2fe350: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x2fe350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_2fe354:
    // 0x2fe354: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2fe354u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2fe358: 0x8e460010  lw          $a2, 0x10($s2)
    ctx->pc = 0x2fe358u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x2fe35c: 0x1318c0  sll         $v1, $s3, 3
    ctx->pc = 0x2fe35cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x2fe360: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2fe360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe364: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2fe364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2fe368: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2fe368u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe36c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2fe36cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2fe370: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x2fe370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x2fe374: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2fe374u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2fe378: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x2fe378u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2fe37c: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x2fe37cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    // 0x2fe380: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x2fe380u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2fe384: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2fe384u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe388: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x2fe388u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x2fe38c: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x2fe38cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x2fe390: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x2fe390u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe394: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x2FE394u;
    {
        const bool branch_taken_0x2fe394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE394u;
        // 0x2fe398: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe394) {
            ctx->pc = 0x2FE458u;
            goto label_2fe458;
        }
    }
    ctx->pc = 0x2FE39Cu;
label_2fe39c:
    // 0x2fe39c: 0x16820032  bne         $s4, $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x2FE39Cu;
    {
        const bool branch_taken_0x2fe39c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x2FE3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE39Cu;
        // 0x2fe3a0: 0x3c05006b  lui         $a1, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe39c) {
            ctx->pc = 0x2FE468u;
            goto label_2fe468;
        }
    }
    ctx->pc = 0x2FE3A4u;
    // 0x2fe3a4: 0x8e220130  lw          $v0, 0x130($s1)
    ctx->pc = 0x2fe3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x2fe3a8: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2fe3a8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fe3ac: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x2fe3acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2fe3b0: 0x160302d  daddu       $a2, $t3, $zero
    ctx->pc = 0x2fe3b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe3b4: 0x8e480004  lw          $t0, 0x4($s2)
    ctx->pc = 0x2fe3b4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2fe3b8: 0x2980a  movz        $s3, $zero, $v0
    ctx->pc = 0x2fe3b8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0));
    // 0x2fe3bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2fe3bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe3c0: 0xc0bf784  jal         func_2FDE10
    ctx->pc = 0x2FE3C0u;
    SET_GPR_U32(ctx, 31, 0x2FE3C8u);
    ctx->pc = 0x2FE3C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE3C0u;
    // 0x2fe3c4: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDE10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2FDE10u, 0x2FE3C0u, 0x2FE3C8u)) {
        return;
    }
    ctx->pc = 0x2FE3C8u;
label_2fe3c8:
    // 0x2fe3c8: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x2fe3c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2fe3cc: 0x171080  sll         $v0, $s7, 2
    ctx->pc = 0x2fe3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
    // 0x2fe3d0: 0x8e480004  lw          $t0, 0x4($s2)
    ctx->pc = 0x2fe3d0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2fe3d4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2fe3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2fe3d8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2fe3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2fe3dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2fe3dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe3e0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2fe3e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2fe3e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2fe3e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe3e8: 0xafa80008  sw          $t0, 0x8($sp)
    ctx->pc = 0x2fe3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 8));
    // 0x2fe3ec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2fe3ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe3f0: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x2fe3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x2fe3f4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2fe3f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe3f8: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x2fe3f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x2fe3fc: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x2fe3fcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2fe400: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x2fe400u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x2fe404: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x2fe404u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe408: 0xc0bfa3c  jal         func_2FE8F0
    ctx->pc = 0x2FE408u;
    SET_GPR_U32(ctx, 31, 0x2FE410u);
    ctx->pc = 0x2FE40Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE408u;
    // 0x2fe40c: 0x2c0582d  daddu       $t3, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE8F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2FE8F0u, 0x2FE408u, 0x2FE410u)) {
        return;
    }
    ctx->pc = 0x2FE410u;
label_2fe410:
    // 0x2fe410: 0x1318c0  sll         $v1, $s3, 3
    ctx->pc = 0x2fe410u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x2fe414: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2fe414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2fe418: 0x24620004  addiu       $v0, $v1, 0x4
    ctx->pc = 0x2fe418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2fe41c: 0x8fa50024  lw          $a1, 0x24($sp)
    ctx->pc = 0x2fe41cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x2fe420: 0x77100b  movn        $v0, $v1, $s7
    ctx->pc = 0x2fe420u;
    if (GPR_U64(ctx, 23) != 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3));
    // 0x2fe424: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2fe424u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2fe428: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2fe428u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2fe42c: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x2fe42cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
    // 0x2fe430: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2fe430u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2fe434: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2fe434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fe438: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2fe438u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe43c: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x2fe43cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x2fe440: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2fe440u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe444: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x2fe444u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x2fe448: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2fe448u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fe44c:
    // 0x2fe44c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2fe44cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe450: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x2fe450u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2fe454: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x2fe454u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2fe458:
    // 0x2fe458: 0xc0bfa3c  jal         func_2FE8F0
    ctx->pc = 0x2FE458u;
    SET_GPR_U32(ctx, 31, 0x2FE460u);
    ctx->pc = 0x2FE45Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE458u;
    // 0x2fe45c: 0x2c0582d  daddu       $t3, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE8F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2FE8F0u, 0x2FE458u, 0x2FE460u)) {
        return;
    }
    ctx->pc = 0x2FE460u;
label_2fe460:
    // 0x2fe460: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2FE460u;
    {
        const bool branch_taken_0x2fe460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE460u;
        // 0x2fe464: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe460) {
            ctx->pc = 0x2FE47Cu;
            goto label_2fe47c;
        }
    }
    ctx->pc = 0x2FE468u;
label_2fe468:
    // 0x2fe468: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2fe468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe46c: 0x24a507d0  addiu       $a1, $a1, 0x7D0
    ctx->pc = 0x2fe46cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2000));
    // 0x2fe470: 0xc0bf772  jal         func_2FDDC8
    ctx->pc = 0x2FE470u;
    SET_GPR_U32(ctx, 31, 0x2FE478u);
    ctx->pc = 0x2FE474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE470u;
    // 0x2fe474: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDDC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2FDDC8u, 0x2FE470u, 0x2FE478u)) {
        return;
    }
    ctx->pc = 0x2FE478u;
label_2fe478:
    // 0x2fe478: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2fe478u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2fe47c:
    // 0x2fe47c: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x2fe47cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2fe480:
    // 0x2fe480: 0x30820004  andi        $v0, $a0, 0x4
    ctx->pc = 0x2fe480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
    // 0x2fe484: 0x10400079  beqz        $v0, . + 4 + (0x79 << 2)
    ctx->pc = 0x2FE484u;
    {
        const bool branch_taken_0x2fe484 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE484u;
        // 0x2fe488: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe484) {
            ctx->pc = 0x2FE66Cu;
            goto label_2fe66c;
        }
    }
    ctx->pc = 0x2FE48Cu;
    // 0x2fe48c: 0x8e230184  lw          $v1, 0x184($s1)
    ctx->pc = 0x2fe48cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
    // 0x2fe490: 0x14620034  bne         $v1, $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x2FE490u;
    {
        const bool branch_taken_0x2fe490 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2FE494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE490u;
        // 0x2fe494: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe490) {
            ctx->pc = 0x2FE564u;
            goto label_2fe564;
        }
    }
    ctx->pc = 0x2FE498u;
    // 0x2fe498: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2fe498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2fe49c: 0x1682000f  bne         $s4, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2FE49Cu;
    {
        const bool branch_taken_0x2fe49c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x2FE4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE49Cu;
        // 0x2fe4a0: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe49c) {
            ctx->pc = 0x2FE4DCu;
            goto label_2fe4dc;
        }
    }
    ctx->pc = 0x2FE4A4u;
    // 0x2fe4a4: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x2fe4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x2fe4a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2fe4a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe4ac: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x2fe4acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2fe4b0: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x2fe4b0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe4b4: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x2fe4b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x2fe4b8: 0x2c0582d  daddu       $t3, $s6, $zero
    ctx->pc = 0x2fe4b8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe4bc: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x2fe4bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x2fe4c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2fe4c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe4c4: 0xafb00018  sw          $s0, 0x18($sp)
    ctx->pc = 0x2fe4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 16));
    // 0x2fe4c8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2fe4c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe4cc: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x2fe4ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x2fe4d0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2fe4d0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe4d4: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x2FE4D4u;
    {
        const bool branch_taken_0x2fe4d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE4D4u;
        // 0x2fe4d8: 0x24090010  addiu       $t1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe4d4) {
            ctx->pc = 0x2FE554u;
            goto label_2fe554;
        }
    }
    ctx->pc = 0x2FE4DCu;
label_2fe4dc:
    // 0x2fe4dc: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x2fe4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x2fe4e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2fe4e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe4e4: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x2fe4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2fe4e8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2fe4e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe4ec: 0x8e2501cc  lw          $a1, 0x1CC($s1)
    ctx->pc = 0x2fe4ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 460)));
    // 0x2fe4f0: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2fe4f0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2fe4f4: 0x8fc60004  lw          $a2, 0x4($fp)
    ctx->pc = 0x2fe4f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x2fe4f8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2fe4f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe4fc: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x2fe4fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x2fe500: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x2fe500u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2fe504: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x2fe504u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x2fe508: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x2fe508u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe50c: 0xafb30010  sw          $s3, 0x10($sp)
    ctx->pc = 0x2fe50cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 19));
    // 0x2fe510: 0x2c0582d  daddu       $t3, $s6, $zero
    ctx->pc = 0x2fe510u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe514: 0xc0bfa3c  jal         func_2FE8F0
    ctx->pc = 0x2FE514u;
    SET_GPR_U32(ctx, 31, 0x2FE51Cu);
    ctx->pc = 0x2FE518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE514u;
    // 0x2fe518: 0xafb00018  sw          $s0, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE8F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2FE8F0u, 0x2FE514u, 0x2FE51Cu)) {
        return;
    }
    ctx->pc = 0x2FE51Cu;
label_2fe51c:
    // 0x2fe51c: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x2fe51cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x2fe520: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2fe520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe524: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x2fe524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x2fe528: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x2fe528u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe52c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2fe52cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2fe530: 0xafb30010  sw          $s3, 0x10($sp)
    ctx->pc = 0x2fe530u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 19));
    // 0x2fe534: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x2fe534u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x2fe538: 0x2c0582d  daddu       $t3, $s6, $zero
    ctx->pc = 0x2fe538u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe53c: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x2fe53cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x2fe540: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2fe540u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fe544: 0xafb00018  sw          $s0, 0x18($sp)
    ctx->pc = 0x2fe544u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 16));
    // 0x2fe548: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2fe548u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe54c: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x2fe54cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2fe550: 0x8fc6000c  lw          $a2, 0xC($fp)
    ctx->pc = 0x2fe550u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
label_2fe554:
    // 0x2fe554: 0xc0bfa3c  jal         func_2FE8F0
    ctx->pc = 0x2FE554u;
    SET_GPR_U32(ctx, 31, 0x2FE55Cu);
    ctx->pc = 0x2FE558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE554u;
    // 0x2fe558: 0x8c8501cc  lw          $a1, 0x1CC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 460)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE8F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2FE8F0u, 0x2FE554u, 0x2FE55Cu)) {
        return;
    }
    ctx->pc = 0x2FE55Cu;
label_2fe55c:
    // 0x2fe55c: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x2FE55Cu;
    {
        const bool branch_taken_0x2fe55c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE55Cu;
        // 0x2fe560: 0xdfbf00e0  ld          $ra, 0xE0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe55c) {
            ctx->pc = 0x2FE670u;
            goto label_2fe670;
        }
    }
    ctx->pc = 0x2FE564u;
label_2fe564:
    // 0x2fe564: 0x16820015  bne         $s4, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2FE564u;
    {
        const bool branch_taken_0x2fe564 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x2FE568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE564u;
        // 0x2fe568: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe564) {
            ctx->pc = 0x2FE5BCu;
            goto label_2fe5bc;
        }
    }
    ctx->pc = 0x2FE56Cu;
    // 0x2fe56c: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x2fe56cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x2fe570: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x2FE570u;
    {
        const bool branch_taken_0x2fe570 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fe570) {
            ctx->pc = 0x2FE574u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FE570u;
            // 0x2fe574: 0x8e2501dc  lw          $a1, 0x1DC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 476)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FE57Cu;
            goto label_2fe57c;
        }
    }
    ctx->pc = 0x2FE578u;
    // 0x2fe578: 0x8e2501ec  lw          $a1, 0x1EC($s1)
    ctx->pc = 0x2fe578u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 492)));
label_2fe57c:
    // 0x2fe57c: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x2fe57cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x2fe580: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2fe580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe584: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x2fe584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2fe588: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x2fe588u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe58c: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x2fe58cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x2fe590: 0x2c0582d  daddu       $t3, $s6, $zero
    ctx->pc = 0x2fe590u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe594: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x2fe594u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x2fe598: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2fe598u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe59c: 0xafb00018  sw          $s0, 0x18($sp)
    ctx->pc = 0x2fe59cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 16));
    // 0x2fe5a0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2fe5a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe5a4: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x2fe5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x2fe5a8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2fe5a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe5ac: 0xc0bfa3c  jal         func_2FE8F0
    ctx->pc = 0x2FE5ACu;
    SET_GPR_U32(ctx, 31, 0x2FE5B4u);
    ctx->pc = 0x2FE5B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE5ACu;
    // 0x2fe5b0: 0x24090010  addiu       $t1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE8F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2FE8F0u, 0x2FE5ACu, 0x2FE5B4u)) {
        return;
    }
    ctx->pc = 0x2FE5B4u;
label_2fe5b4:
    // 0x2fe5b4: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x2FE5B4u;
    {
        const bool branch_taken_0x2fe5b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE5B4u;
        // 0x2fe5b8: 0xdfbf00e0  ld          $ra, 0xE0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe5b4) {
            ctx->pc = 0x2FE670u;
            goto label_2fe670;
        }
    }
    ctx->pc = 0x2FE5BCu;
label_2fe5bc:
    // 0x2fe5bc: 0x16820027  bne         $s4, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x2FE5BCu;
    {
        const bool branch_taken_0x2fe5bc = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x2FE5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE5BCu;
        // 0x2fe5c0: 0x3c05006b  lui         $a1, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe5bc) {
            ctx->pc = 0x2FE65Cu;
            goto label_2fe65c;
        }
    }
    ctx->pc = 0x2FE5C4u;
    // 0x2fe5c4: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x2fe5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x2fe5c8: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x2FE5C8u;
    {
        const bool branch_taken_0x2fe5c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fe5c8) {
            ctx->pc = 0x2FE5CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FE5C8u;
            // 0x2fe5cc: 0x8e2501dc  lw          $a1, 0x1DC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 476)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FE5D4u;
            goto label_2fe5d4;
        }
    }
    ctx->pc = 0x2FE5D0u;
    // 0x2fe5d0: 0x8e2501ec  lw          $a1, 0x1EC($s1)
    ctx->pc = 0x2fe5d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 492)));
label_2fe5d4:
    // 0x2fe5d4: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x2fe5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2fe5d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2fe5d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe5dc: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x2fe5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x2fe5e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2fe5e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe5e4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2fe5e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2fe5e8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2fe5e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe5ec: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x2fe5ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x2fe5f0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2fe5f0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe5f4: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x2fe5f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x2fe5f8: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x2fe5f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2fe5fc: 0xafb00018  sw          $s0, 0x18($sp)
    ctx->pc = 0x2fe5fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 16));
    // 0x2fe600: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x2fe600u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe604: 0xc0bfa3c  jal         func_2FE8F0
    ctx->pc = 0x2FE604u;
    SET_GPR_U32(ctx, 31, 0x2FE60Cu);
    ctx->pc = 0x2FE608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE604u;
    // 0x2fe608: 0x2c0582d  daddu       $t3, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE8F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2FE8F0u, 0x2FE604u, 0x2FE60Cu)) {
        return;
    }
    ctx->pc = 0x2FE60Cu;
label_2fe60c:
    // 0x2fe60c: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x2fe60cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2fe610: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x2FE610u;
    {
        const bool branch_taken_0x2fe610 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fe610) {
            ctx->pc = 0x2FE614u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FE610u;
            // 0x2fe614: 0x8e2501dc  lw          $a1, 0x1DC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 476)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FE61Cu;
            goto label_2fe61c;
        }
    }
    ctx->pc = 0x2FE618u;
    // 0x2fe618: 0x8e2501ec  lw          $a1, 0x1EC($s1)
    ctx->pc = 0x2fe618u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 492)));
label_2fe61c:
    // 0x2fe61c: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x2fe61cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x2fe620: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2fe620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe624: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x2fe624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x2fe628: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x2fe628u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe62c: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x2fe62cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x2fe630: 0x2c0582d  daddu       $t3, $s6, $zero
    ctx->pc = 0x2fe630u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe634: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x2fe634u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x2fe638: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2fe638u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe63c: 0xafb00018  sw          $s0, 0x18($sp)
    ctx->pc = 0x2fe63cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 16));
    // 0x2fe640: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2fe640u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe644: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x2fe644u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x2fe648: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x2fe648u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2fe64c: 0xc0bfa3c  jal         func_2FE8F0
    ctx->pc = 0x2FE64Cu;
    SET_GPR_U32(ctx, 31, 0x2FE654u);
    ctx->pc = 0x2FE650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE64Cu;
    // 0x2fe650: 0x24090008  addiu       $t1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE8F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2FE8F0u, 0x2FE64Cu, 0x2FE654u)) {
        return;
    }
    ctx->pc = 0x2FE654u;
label_2fe654:
    // 0x2fe654: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2FE654u;
    {
        const bool branch_taken_0x2fe654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE654u;
        // 0x2fe658: 0xdfbf00e0  ld          $ra, 0xE0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe654) {
            ctx->pc = 0x2FE670u;
            goto label_2fe670;
        }
    }
    ctx->pc = 0x2FE65Cu;
label_2fe65c:
    // 0x2fe65c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2fe65cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe660: 0x24a507f0  addiu       $a1, $a1, 0x7F0
    ctx->pc = 0x2fe660u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2032));
    // 0x2fe664: 0xc0bf772  jal         func_2FDDC8
    ctx->pc = 0x2FE664u;
    SET_GPR_U32(ctx, 31, 0x2FE66Cu);
    ctx->pc = 0x2FE668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE664u;
    // 0x2fe668: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDDC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2FDDC8u, 0x2FE664u, 0x2FE66Cu)) {
        return;
    }
    ctx->pc = 0x2FE66Cu;
label_2fe66c:
    // 0x2fe66c: 0xdfbf00e0  ld          $ra, 0xE0($sp)
    ctx->pc = 0x2fe66cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
label_2fe670:
    // 0x2fe670: 0xdfbe00d0  ld          $fp, 0xD0($sp)
    ctx->pc = 0x2fe670u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2fe674: 0xdfb700c0  ld          $s7, 0xC0($sp)
    ctx->pc = 0x2fe674u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2fe678: 0xdfb600b0  ld          $s6, 0xB0($sp)
    ctx->pc = 0x2fe678u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2fe67c: 0xdfb500a0  ld          $s5, 0xA0($sp)
    ctx->pc = 0x2fe67cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2fe680: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x2fe680u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2fe684: 0xdfb30080  ld          $s3, 0x80($sp)
    ctx->pc = 0x2fe684u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2fe688: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x2fe688u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2fe68c: 0xdfb10060  ld          $s1, 0x60($sp)
    ctx->pc = 0x2fe68cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2fe690: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x2fe690u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2fe694: 0x3e00008  jr          $ra
    ctx->pc = 0x2FE694u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FE698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE694u;
        // 0x2fe698: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FE694u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FE69Cu;
    // 0x2fe69c: 0x0  nop
    ctx->pc = 0x2fe69cu;
    // NOP
    ctx->pc = 0x2fe6a0u;
}
