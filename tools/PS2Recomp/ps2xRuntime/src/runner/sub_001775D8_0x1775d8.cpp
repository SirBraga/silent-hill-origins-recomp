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

// Function: sub_001775D8
// Address: 0x1775d8 - 0x177828
void sub_001775D8_0x1775d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001775D8_0x1775d8");
#endif

    switch (ctx->pc) {
        case 0x1775fcu: goto label_1775fc;
        case 0x17762cu: goto label_17762c;
        case 0x177660u: goto label_177660;
        case 0x177680u: goto label_177680;
        case 0x177694u: goto label_177694;
        case 0x1776ccu: goto label_1776cc;
        case 0x1776f8u: goto label_1776f8;
        case 0x177728u: goto label_177728;
        case 0x17774cu: goto label_17774c;
        case 0x177778u: goto label_177778;
        case 0x177784u: goto label_177784;
        case 0x1777b0u: goto label_1777b0;
        case 0x1777d0u: goto label_1777d0;
        case 0x177804u: goto label_177804;
        case 0x17780cu: goto label_17780c;
        default: break;
    }

    ctx->pc = 0x1775d8u;

    // 0x1775d8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1775d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1775dc: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x1775dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x1775e0: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x1775e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x1775e4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1775e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1775e8: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x1775e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x1775ec: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1775ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1775f0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1775f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1775f4: 0xc04f0bc  jal         func_13C2F0
    ctx->pc = 0x1775F4u;
    SET_GPR_U32(ctx, 31, 0x1775FCu);
    ctx->pc = 0x1775F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1775F4u;
    // 0x1775f8: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C2F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C2F0u, 0x1775F4u, 0x1775FCu)) {
        return;
    }
    ctx->pc = 0x1775FCu;
label_1775fc:
    // 0x1775fc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1775fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x177600: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x177600u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x177604: 0x8c43eed8  lw          $v1, -0x1128($v0)
    ctx->pc = 0x177604u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6BEED8u));
    // 0x177608: 0x14830032  bne         $a0, $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x177608u;
    {
        const bool branch_taken_0x177608 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x17760Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177608u;
        // 0x17760c: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177608) {
            ctx->pc = 0x1776D4u;
            goto label_1776d4;
        }
    }
    ctx->pc = 0x177610u;
    // 0x177610: 0x8e110004  lw          $s1, 0x4($s0)
    ctx->pc = 0x177610u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x177614: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x177614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177618: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x177618u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17761c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x17761cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177620: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x177620u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x177624: 0xc05e316  jal         func_178C58
    ctx->pc = 0x177624u;
    SET_GPR_U32(ctx, 31, 0x17762Cu);
    ctx->pc = 0x177628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177624u;
    // 0x177628: 0x8e260000  lw          $a2, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178C58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x178C58u, 0x177624u, 0x17762Cu)) {
        return;
    }
    ctx->pc = 0x17762Cu;
label_17762c:
    // 0x17762c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x17762cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x177630: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x177630u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x177634: 0x8c4445e0  lw          $a0, 0x45E0($v0)
    ctx->pc = 0x177634u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B45E0u));
    // 0x177638: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x177638u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17763c: 0x8c621a70  lw          $v0, 0x1A70($v1)
    ctx->pc = 0x17763cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x701A70u));
    // 0x177640: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x177640u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x177644: 0x10820006  beq         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x177644u;
    {
        const bool branch_taken_0x177644 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x177648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177644u;
        // 0x177648: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177644) {
            ctx->pc = 0x177660u;
            goto label_177660;
        }
    }
    ctx->pc = 0x17764Cu;
    // 0x17764c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x17764cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x177650: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x177650u;
    {
        const bool branch_taken_0x177650 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x177650) {
            ctx->pc = 0x177654u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x177650u;
            // 0x177654: 0x8e430008  lw          $v1, 0x8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x177664u;
            goto label_177664;
        }
    }
    ctx->pc = 0x177658u;
    // 0x177658: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x177658u;
    SET_GPR_U32(ctx, 31, 0x177660u);
    ctx->pc = 0x17765Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177658u;
    // 0x17765c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x177658u, 0x177660u)) {
        return;
    }
    ctx->pc = 0x177660u;
label_177660:
    // 0x177660: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x177660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_177664:
    // 0x177664: 0x26460050  addiu       $a2, $s2, 0x50
    ctx->pc = 0x177664u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
    // 0x177668: 0x8fb00004  lw          $s0, 0x4($sp)
    ctx->pc = 0x177668u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x17766c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x17766cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x177670: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x177670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x177674: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x177674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177678: 0xc049b84  jal         func_126E10
    ctx->pc = 0x177678u;
    SET_GPR_U32(ctx, 31, 0x177680u);
    ctx->pc = 0x17767Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177678u;
    // 0x17767c: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126E10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x126E10u, 0x177678u, 0x177680u)) {
        return;
    }
    ctx->pc = 0x177680u;
label_177680:
    // 0x177680: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x177680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x177684: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x177684u;
    {
        const bool branch_taken_0x177684 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x177688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177684u;
        // 0x177688: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177684) {
            ctx->pc = 0x177694u;
            goto label_177694;
        }
    }
    ctx->pc = 0x17768Cu;
    // 0x17768c: 0xc049bbe  jal         func_126EF8
    ctx->pc = 0x17768Cu;
    SET_GPR_U32(ctx, 31, 0x177694u);
    ctx->pc = 0x177690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17768Cu;
    // 0x177690: 0xc48c0bd8  lwc1        $f12, 0xBD8($a0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 3032)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x126EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x126EF8u, 0x17768Cu, 0x177694u)) {
        return;
    }
    ctx->pc = 0x177694u;
label_177694:
    // 0x177694: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x177694u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x177698: 0x10a0005c  beqz        $a1, . + 4 + (0x5C << 2)
    ctx->pc = 0x177698u;
    {
        const bool branch_taken_0x177698 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x17769Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177698u;
        // 0x17769c: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177698) {
            ctx->pc = 0x17780Cu;
            goto label_17780c;
        }
    }
    ctx->pc = 0x1776A0u;
    // 0x1776a0: 0x8e631a70  lw          $v1, 0x1A70($s3)
    ctx->pc = 0x1776a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 6768)));
    // 0x1776a4: 0x8c44f948  lw          $a0, -0x6B8($v0)
    ctx->pc = 0x1776a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965576)));
    // 0x1776a8: 0x10830059  beq         $a0, $v1, . + 4 + (0x59 << 2)
    ctx->pc = 0x1776A8u;
    {
        const bool branch_taken_0x1776a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1776ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1776A8u;
        // 0x1776ac: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1776a8) {
            ctx->pc = 0x177810u;
            goto label_177810;
        }
    }
    ctx->pc = 0x1776B0u;
    // 0x1776b0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1776b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1776b4: 0x10400057  beqz        $v0, . + 4 + (0x57 << 2)
    ctx->pc = 0x1776B4u;
    {
        const bool branch_taken_0x1776b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1776B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1776B4u;
        // 0x1776b8: 0x7bb10060  lq          $s1, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1776b4) {
            ctx->pc = 0x177814u;
            goto label_177814;
        }
    }
    ctx->pc = 0x1776BCu;
    // 0x1776bc: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1776bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1776c0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1776c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1776c4: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x1776C4u;
    SET_GPR_U32(ctx, 31, 0x1776CCu);
    ctx->pc = 0x1776C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1776C4u;
    // 0x1776c8: 0xac850004  sw          $a1, 0x4($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1776C4u, 0x1776CCu)) {
        return;
    }
    ctx->pc = 0x1776CCu;
label_1776cc:
    // 0x1776cc: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x1776CCu;
    {
        const bool branch_taken_0x1776cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1776D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1776CCu;
        // 0x1776d0: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1776cc) {
            ctx->pc = 0x177810u;
            goto label_177810;
        }
    }
    ctx->pc = 0x1776D4u;
label_1776d4:
    // 0x1776d4: 0x8c4342d8  lw          $v1, 0x42D8($v0)
    ctx->pc = 0x1776d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17112)));
    // 0x1776d8: 0x1483000a  bne         $a0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1776D8u;
    {
        const bool branch_taken_0x1776d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1776DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1776D8u;
        // 0x1776dc: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1776d8) {
            ctx->pc = 0x177704u;
            goto label_177704;
        }
    }
    ctx->pc = 0x1776E0u;
    // 0x1776e0: 0x8e110004  lw          $s1, 0x4($s0)
    ctx->pc = 0x1776e0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1776e4: 0x12200049  beqz        $s1, . + 4 + (0x49 << 2)
    ctx->pc = 0x1776E4u;
    {
        const bool branch_taken_0x1776e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1776E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1776E4u;
        // 0x1776e8: 0x26500044  addiu       $s0, $s2, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1776e4) {
            ctx->pc = 0x17780Cu;
            goto label_17780c;
        }
    }
    ctx->pc = 0x1776ECu;
    // 0x1776ec: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x1776ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1776f0: 0xc043ce6  jal         func_10F398
    ctx->pc = 0x1776F0u;
    SET_GPR_U32(ctx, 31, 0x1776F8u);
    ctx->pc = 0x1776F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1776F0u;
    // 0x1776f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F398u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10F398u, 0x1776F0u, 0x1776F8u)) {
        return;
    }
    ctx->pc = 0x1776F8u;
label_1776f8:
    // 0x1776f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1776f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1776fc: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1776FCu;
    {
        const bool branch_taken_0x1776fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x177700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1776FCu;
        // 0x177700: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1776fc) {
            ctx->pc = 0x177744u;
            goto label_177744;
        }
    }
    ctx->pc = 0x177704u;
label_177704:
    // 0x177704: 0x8c4342d0  lw          $v1, 0x42D0($v0)
    ctx->pc = 0x177704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17104)));
    // 0x177708: 0x14830012  bne         $a0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x177708u;
    {
        const bool branch_taken_0x177708 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x17770Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177708u;
        // 0x17770c: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177708) {
            ctx->pc = 0x177754u;
            goto label_177754;
        }
    }
    ctx->pc = 0x177710u;
    // 0x177710: 0x8e110004  lw          $s1, 0x4($s0)
    ctx->pc = 0x177710u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x177714: 0x1220003d  beqz        $s1, . + 4 + (0x3D << 2)
    ctx->pc = 0x177714u;
    {
        const bool branch_taken_0x177714 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x177718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177714u;
        // 0x177718: 0x26500044  addiu       $s0, $s2, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177714) {
            ctx->pc = 0x17780Cu;
            goto label_17780c;
        }
    }
    ctx->pc = 0x17771Cu;
    // 0x17771c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x17771cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x177720: 0xc043ce6  jal         func_10F398
    ctx->pc = 0x177720u;
    SET_GPR_U32(ctx, 31, 0x177728u);
    ctx->pc = 0x177724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177720u;
    // 0x177724: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F398u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10F398u, 0x177720u, 0x177728u)) {
        return;
    }
    ctx->pc = 0x177728u;
label_177728:
    // 0x177728: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x177728u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17772c: 0x50a00038  beql        $a1, $zero, . + 4 + (0x38 << 2)
    ctx->pc = 0x17772Cu;
    {
        const bool branch_taken_0x17772c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x17772c) {
            ctx->pc = 0x177730u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17772Cu;
            // 0x177730: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x177810u;
            goto label_177810;
        }
    }
    ctx->pc = 0x177734u;
    // 0x177734: 0x8ca20020  lw          $v0, 0x20($a1)
    ctx->pc = 0x177734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x177738: 0x50400035  beql        $v0, $zero, . + 4 + (0x35 << 2)
    ctx->pc = 0x177738u;
    {
        const bool branch_taken_0x177738 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x177738) {
            ctx->pc = 0x17773Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x177738u;
            // 0x17773c: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x177810u;
            goto label_177810;
        }
    }
    ctx->pc = 0x177740u;
    // 0x177740: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x177740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_177744:
    // 0x177744: 0xc043c7c  jal         func_10F1F0
    ctx->pc = 0x177744u;
    SET_GPR_U32(ctx, 31, 0x17774Cu);
    ctx->pc = 0x177748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177744u;
    // 0x177748: 0x26260004  addiu       $a2, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F1F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10F1F0u, 0x177744u, 0x17774Cu)) {
        return;
    }
    ctx->pc = 0x17774Cu;
label_17774c:
    // 0x17774c: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x17774Cu;
    {
        const bool branch_taken_0x17774c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x177750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17774Cu;
        // 0x177750: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17774c) {
            ctx->pc = 0x177810u;
            goto label_177810;
        }
    }
    ctx->pc = 0x177754u;
label_177754:
    // 0x177754: 0x8c4342e0  lw          $v1, 0x42E0($v0)
    ctx->pc = 0x177754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17120)));
    // 0x177758: 0x1483000c  bne         $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x177758u;
    {
        const bool branch_taken_0x177758 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x17775Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177758u;
        // 0x17775c: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177758) {
            ctx->pc = 0x17778Cu;
            goto label_17778c;
        }
    }
    ctx->pc = 0x177760u;
    // 0x177760: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x177760u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x177764: 0x10a00029  beqz        $a1, . + 4 + (0x29 << 2)
    ctx->pc = 0x177764u;
    {
        const bool branch_taken_0x177764 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x177768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177764u;
        // 0x177768: 0x26500044  addiu       $s0, $s2, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177764) {
            ctx->pc = 0x17780Cu;
            goto label_17780c;
        }
    }
    ctx->pc = 0x17776Cu;
    // 0x17776c: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x17776cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x177770: 0xc043ce6  jal         func_10F398
    ctx->pc = 0x177770u;
    SET_GPR_U32(ctx, 31, 0x177778u);
    ctx->pc = 0x177774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177770u;
    // 0x177774: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F398u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10F398u, 0x177770u, 0x177778u)) {
        return;
    }
    ctx->pc = 0x177778u;
label_177778:
    // 0x177778: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x177778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17777c: 0xc043c88  jal         func_10F220
    ctx->pc = 0x17777Cu;
    SET_GPR_U32(ctx, 31, 0x177784u);
    ctx->pc = 0x177780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17777Cu;
    // 0x177780: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F220u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10F220u, 0x17777Cu, 0x177784u)) {
        return;
    }
    ctx->pc = 0x177784u;
label_177784:
    // 0x177784: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x177784u;
    {
        const bool branch_taken_0x177784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x177788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177784u;
        // 0x177788: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177784) {
            ctx->pc = 0x177810u;
            goto label_177810;
        }
    }
    ctx->pc = 0x17778Cu;
label_17778c:
    // 0x17778c: 0x8c4342e8  lw          $v1, 0x42E8($v0)
    ctx->pc = 0x17778cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17128)));
    // 0x177790: 0x14830011  bne         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x177790u;
    {
        const bool branch_taken_0x177790 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x177794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177790u;
        // 0x177794: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177790) {
            ctx->pc = 0x1777D8u;
            goto label_1777d8;
        }
    }
    ctx->pc = 0x177798u;
    // 0x177798: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x177798u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x17779c: 0x1200001b  beqz        $s0, . + 4 + (0x1B << 2)
    ctx->pc = 0x17779Cu;
    {
        const bool branch_taken_0x17779c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1777A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17779Cu;
        // 0x1777a0: 0x26510044  addiu       $s1, $s2, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17779c) {
            ctx->pc = 0x17780Cu;
            goto label_17780c;
        }
    }
    ctx->pc = 0x1777A4u;
    // 0x1777a4: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1777a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1777a8: 0xc043ce6  jal         func_10F398
    ctx->pc = 0x1777A8u;
    SET_GPR_U32(ctx, 31, 0x1777B0u);
    ctx->pc = 0x1777ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1777A8u;
    // 0x1777ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F398u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10F398u, 0x1777A8u, 0x1777B0u)) {
        return;
    }
    ctx->pc = 0x1777B0u;
label_1777b0:
    // 0x1777b0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1777b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1777b4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1777b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1777b8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1777B8u;
    {
        const bool branch_taken_0x1777b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1777BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1777B8u;
        // 0x1777bc: 0xc60c0004  lwc1        $f12, 0x4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1777b8) {
            ctx->pc = 0x1777C8u;
            goto label_1777c8;
        }
    }
    ctx->pc = 0x1777C0u;
    // 0x1777c0: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x1777c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1777c4: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x1777c4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_1777c8:
    // 0x1777c8: 0xc043caa  jal         func_10F2A8
    ctx->pc = 0x1777C8u;
    SET_GPR_U32(ctx, 31, 0x1777D0u);
    ctx->pc = 0x1777CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1777C8u;
    // 0x1777cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F2A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10F2A8u, 0x1777C8u, 0x1777D0u)) {
        return;
    }
    ctx->pc = 0x1777D0u;
label_1777d0:
    // 0x1777d0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1777D0u;
    {
        const bool branch_taken_0x1777d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1777D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1777D0u;
        // 0x1777d4: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1777d0) {
            ctx->pc = 0x177810u;
            goto label_177810;
        }
    }
    ctx->pc = 0x1777D8u;
label_1777d8:
    // 0x1777d8: 0x8c438880  lw          $v1, -0x7780($v0)
    ctx->pc = 0x1777d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936704)));
    // 0x1777dc: 0x5483000c  bnel        $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1777DCu;
    {
        const bool branch_taken_0x1777dc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1777dc) {
            ctx->pc = 0x1777E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1777DCu;
            // 0x1777e0: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x177810u;
            goto label_177810;
        }
    }
    ctx->pc = 0x1777E4u;
    // 0x1777e4: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x1777e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1777e8: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1777E8u;
    {
        const bool branch_taken_0x1777e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1777ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1777E8u;
        // 0x1777ec: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1777e8) {
            ctx->pc = 0x177810u;
            goto label_177810;
        }
    }
    ctx->pc = 0x1777F0u;
    // 0x1777f0: 0x8e440110  lw          $a0, 0x110($s2)
    ctx->pc = 0x1777f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 272)));
    // 0x1777f4: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1777F4u;
    {
        const bool branch_taken_0x1777f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1777F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1777F4u;
        // 0x1777f8: 0x7bb10060  lq          $s1, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1777f4) {
            ctx->pc = 0x177814u;
            goto label_177814;
        }
    }
    ctx->pc = 0x1777FCu;
    // 0x1777fc: 0xc0778f8  jal         func_1DE3E0
    ctx->pc = 0x1777FCu;
    SET_GPR_U32(ctx, 31, 0x177804u);
    ctx->pc = 0x177800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1777FCu;
    // 0x177800: 0xc4ac0008  lwc1        $f12, 0x8($a1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE3E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DE3E0u, 0x1777FCu, 0x177804u)) {
        return;
    }
    ctx->pc = 0x177804u;
label_177804:
    // 0x177804: 0xc077914  jal         func_1DE450
    ctx->pc = 0x177804u;
    SET_GPR_U32(ctx, 31, 0x17780Cu);
    ctx->pc = 0x177808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177804u;
    // 0x177808: 0x8e440110  lw          $a0, 0x110($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 272)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE450u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DE450u, 0x177804u, 0x17780Cu)) {
        return;
    }
    ctx->pc = 0x17780Cu;
label_17780c:
    // 0x17780c: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x17780cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_177810:
    // 0x177810: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x177810u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_177814:
    // 0x177814: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x177814u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x177818: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x177818u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17781c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x17781cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x177820: 0x3e00008  jr          $ra
    ctx->pc = 0x177820u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177820u;
        // 0x177824: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x177820u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x177828u;
}
