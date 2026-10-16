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

// Function: sub_001C02C0
// Address: 0x1c02c0 - 0x1c03e8
void sub_001C02C0_0x1c02c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C02C0_0x1c02c0");
#endif

    switch (ctx->pc) {
        case 0x1c031cu: goto label_1c031c;
        case 0x1c035cu: goto label_1c035c;
        case 0x1c0394u: goto label_1c0394;
        case 0x1c03d4u: goto label_1c03d4;
        default: break;
    }

    ctx->pc = 0x1c02c0u;

    // 0x1c02c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c02c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c02c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c02c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c02c8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1c02c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1c02cc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c02ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c02d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c02d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c02d4: 0xae0302cc  sw          $v1, 0x2CC($s0)
    ctx->pc = 0x1c02d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 716), GPR_U32(ctx, 3));
    // 0x1c02d8: 0x8e0202c8  lw          $v0, 0x2C8($s0)
    ctx->pc = 0x1c02d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 712)));
    // 0x1c02dc: 0xae0002dc  sw          $zero, 0x2DC($s0)
    ctx->pc = 0x1c02dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 732), GPR_U32(ctx, 0));
    // 0x1c02e0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1c02e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1c02e4: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1C02E4u;
    {
        const bool branch_taken_0x1c02e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C02E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C02E4u;
        // 0x1c02e8: 0xae0202c8  sw          $v0, 0x2C8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 712), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c02e4) {
            ctx->pc = 0x1C0364u;
            goto label_1c0364;
        }
    }
    ctx->pc = 0x1C02ECu;
    // 0x1c02ec: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x1c02ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x1c02f0: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1c02f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1c02f4: 0x8c454438  lw          $a1, 0x4438($v0)
    ctx->pc = 0x1c02f4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6B4438u));
    // 0x1c02f8: 0x8c831a70  lw          $v1, 0x1A70($a0)
    ctx->pc = 0x1c02f8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x701A70u));
    // 0x1c02fc: 0x50a30008  beql        $a1, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C02FCu;
    {
        const bool branch_taken_0x1c02fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c02fc) {
            ctx->pc = 0x1C0300u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C02FCu;
            // 0x1c0300: 0x8e030260  lw          $v1, 0x260($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C0320u;
            goto label_1c0320;
        }
    }
    ctx->pc = 0x1C0304u;
    // 0x1c0304: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1c0304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1c0308: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C0308u;
    {
        const bool branch_taken_0x1c0308 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C030Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0308u;
        // 0x1c030c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0308) {
            ctx->pc = 0x1C031Cu;
            goto label_1c031c;
        }
    }
    ctx->pc = 0x1C0310u;
    // 0x1c0310: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x1c0310u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x1c0314: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x1C0314u;
    SET_GPR_U32(ctx, 31, 0x1C031Cu);
    ctx->pc = 0x1C0318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0314u;
    // 0x1c0318: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1C0314u, 0x1C031Cu)) {
        return;
    }
    ctx->pc = 0x1C031Cu;
label_1c031c:
    // 0x1c031c: 0x8e030260  lw          $v1, 0x260($s0)
    ctx->pc = 0x1c031cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
label_1c0320:
    // 0x1c0320: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x1c0320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1c0324: 0x3c014400  lui         $at, 0x4400
    ctx->pc = 0x1c0324u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17408 << 16));
    // 0x1c0328: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c0328u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c032c: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1c032cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1c0330: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x1c0330u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1c0334: 0x244294d8  addiu       $v0, $v0, -0x6B28
    ctx->pc = 0x1c0334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939864));
    // 0x1c0338: 0xe60002d8  swc1        $f0, 0x2D8($s0)
    ctx->pc = 0x1c0338u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 728), bits); }
    // 0x1c033c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c033cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0340: 0x8e040044  lw          $a0, 0x44($s0)
    ctx->pc = 0x1c0340u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x1c0344: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1c0344u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1c0348: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c0348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c034c: 0x248400f8  addiu       $a0, $a0, 0xF8
    ctx->pc = 0x1c034cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 248));
    // 0x1c0350: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1c0350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c0354: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1C0354u;
    SET_GPR_U32(ctx, 31, 0x1C035Cu);
    ctx->pc = 0x1C0358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0354u;
    // 0x1c0358: 0xe60002d4  swc1        $f0, 0x2D4($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 724), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1C0354u, 0x1C035Cu)) {
        return;
    }
    ctx->pc = 0x1C035Cu;
label_1c035c:
    // 0x1c035c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1C035Cu;
    {
        const bool branch_taken_0x1c035c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C035Cu;
        // 0x1c0360: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c035c) {
            ctx->pc = 0x1C03D8u;
            goto label_1c03d8;
        }
    }
    ctx->pc = 0x1C0364u;
label_1c0364:
    // 0x1c0364: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x1c0364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x1c0368: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1c0368u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1c036c: 0x8c454440  lw          $a1, 0x4440($v0)
    ctx->pc = 0x1c036cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6B4440u));
    // 0x1c0370: 0x8c831a70  lw          $v1, 0x1A70($a0)
    ctx->pc = 0x1c0370u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x701A70u));
    // 0x1c0374: 0x50a30008  beql        $a1, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C0374u;
    {
        const bool branch_taken_0x1c0374 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c0374) {
            ctx->pc = 0x1C0378u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C0374u;
            // 0x1c0378: 0x8e030260  lw          $v1, 0x260($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C0398u;
            goto label_1c0398;
        }
    }
    ctx->pc = 0x1C037Cu;
    // 0x1c037c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1c037cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1c0380: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C0380u;
    {
        const bool branch_taken_0x1c0380 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0380u;
        // 0x1c0384: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0380) {
            ctx->pc = 0x1C0394u;
            goto label_1c0394;
        }
    }
    ctx->pc = 0x1C0388u;
    // 0x1c0388: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x1c0388u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x1c038c: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x1C038Cu;
    SET_GPR_U32(ctx, 31, 0x1C0394u);
    ctx->pc = 0x1C0390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C038Cu;
    // 0x1c0390: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1C038Cu, 0x1C0394u)) {
        return;
    }
    ctx->pc = 0x1C0394u;
label_1c0394:
    // 0x1c0394: 0x8e030260  lw          $v1, 0x260($s0)
    ctx->pc = 0x1c0394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
label_1c0398:
    // 0x1c0398: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x1c0398u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1c039c: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1c039cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1c03a0: 0x8e040044  lw          $a0, 0x44($s0)
    ctx->pc = 0x1c03a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x1c03a4: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x1c03a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1c03a8: 0x244294d8  addiu       $v0, $v0, -0x6B28
    ctx->pc = 0x1c03a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939864));
    // 0x1c03ac: 0x3c014400  lui         $at, 0x4400
    ctx->pc = 0x1c03acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17408 << 16));
    // 0x1c03b0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c03b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c03b4: 0x248400f8  addiu       $a0, $a0, 0xF8
    ctx->pc = 0x1c03b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 248));
    // 0x1c03b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c03b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c03bc: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1c03bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1c03c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c03c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c03c4: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1c03c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c03c8: 0xe60102d4  swc1        $f1, 0x2D4($s0)
    ctx->pc = 0x1c03c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 724), bits); }
    // 0x1c03cc: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1C03CCu;
    SET_GPR_U32(ctx, 31, 0x1C03D4u);
    ctx->pc = 0x1C03D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C03CCu;
    // 0x1c03d0: 0xe60002d8  swc1        $f0, 0x2D8($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 728), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1C03CCu, 0x1C03D4u)) {
        return;
    }
    ctx->pc = 0x1C03D4u;
label_1c03d4:
    // 0x1c03d4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1c03d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1c03d8:
    // 0x1c03d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c03d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c03dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1C03DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C03E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C03DCu;
        // 0x1c03e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C03DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C03E4u;
    // 0x1c03e4: 0x0  nop
    ctx->pc = 0x1c03e4u;
    // NOP
    ctx->pc = 0x1c03e8u;
}
