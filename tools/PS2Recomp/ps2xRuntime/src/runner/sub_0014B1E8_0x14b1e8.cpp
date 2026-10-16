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

// Function: sub_0014B1E8
// Address: 0x14b1e8 - 0x14b3e0
void sub_0014B1E8_0x14b1e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014B1E8_0x14b1e8");
#endif

    switch (ctx->pc) {
        case 0x14b230u: goto label_14b230;
        case 0x14b244u: goto label_14b244;
        case 0x14b258u: goto label_14b258;
        case 0x14b294u: goto label_14b294;
        case 0x14b2b8u: goto label_14b2b8;
        case 0x14b2d8u: goto label_14b2d8;
        case 0x14b2e4u: goto label_14b2e4;
        case 0x14b330u: goto label_14b330;
        case 0x14b364u: goto label_14b364;
        case 0x14b388u: goto label_14b388;
        case 0x14b3bcu: goto label_14b3bc;
        default: break;
    }

    ctx->pc = 0x14b1e8u;

    // 0x14b1e8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x14b1e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x14b1ec: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x14b1ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x14b1f0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x14b1f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x14b1f4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x14b1f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b1f8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x14b1f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x14b1fc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x14b1fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x14b200: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x14b200u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x14b204: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x14b204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x14b208: 0x8e300048  lw          $s0, 0x48($s1)
    ctx->pc = 0x14b208u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x14b20c: 0x1200001c  beqz        $s0, . + 4 + (0x1C << 2)
    ctx->pc = 0x14B20Cu;
    {
        const bool branch_taken_0x14b20c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B20Cu;
        // 0x14b210: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b20c) {
            ctx->pc = 0x14B280u;
            goto label_14b280;
        }
    }
    ctx->pc = 0x14B214u;
    // 0x14b214: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x14b214u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14b218: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x14B218u;
    {
        const bool branch_taken_0x14b218 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B218u;
        // 0x14b21c: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b218) {
            ctx->pc = 0x14B280u;
            goto label_14b280;
        }
    }
    ctx->pc = 0x14B220u;
    // 0x14b220: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x14b220u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x14b224: 0x8c5284e4  lw          $s2, -0x7B1C($v0)
    ctx->pc = 0x14b224u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294935780)));
    // 0x14b228: 0xc07d234  jal         func_1F48D0
    ctx->pc = 0x14B228u;
    SET_GPR_U32(ctx, 31, 0x14B230u);
    ctx->pc = 0x14B22Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B228u;
    // 0x14b22c: 0x27b30010  addiu       $s3, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x14B228u, 0x14B230u)) {
        return;
    }
    ctx->pc = 0x14B230u;
label_14b230:
    // 0x14b230: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x14B230u;
    {
        const bool branch_taken_0x14b230 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B230u;
        // 0x14b234: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b230) {
            ctx->pc = 0x14B260u;
            goto label_14b260;
        }
    }
    ctx->pc = 0x14B238u;
    // 0x14b238: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x14b238u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b23c: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x14B23Cu;
    SET_GPR_U32(ctx, 31, 0x14B244u);
    ctx->pc = 0x14B240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B23Cu;
    // 0x14b240: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x14B23Cu, 0x14B244u)) {
        return;
    }
    ctx->pc = 0x14B244u;
label_14b244:
    // 0x14b244: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x14B244u;
    {
        const bool branch_taken_0x14b244 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B244u;
        // 0x14b248: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b244) {
            ctx->pc = 0x14B260u;
            goto label_14b260;
        }
    }
    ctx->pc = 0x14B24Cu;
    // 0x14b24c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14b24cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b250: 0xc07d348  jal         func_1F4D20
    ctx->pc = 0x14B250u;
    SET_GPR_U32(ctx, 31, 0x14B258u);
    ctx->pc = 0x14B254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B250u;
    // 0x14b254: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4D20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4D20u, 0x14B250u, 0x14B258u)) {
        return;
    }
    ctx->pc = 0x14B258u;
label_14b258:
    // 0x14b258: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x14B258u;
    {
        const bool branch_taken_0x14b258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B258u;
        // 0x14b25c: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b258) {
            ctx->pc = 0x14B264u;
            goto label_14b264;
        }
    }
    ctx->pc = 0x14B260u;
label_14b260:
    // 0x14b260: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x14b260u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14b264:
    // 0x14b264: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14B264u;
    {
        const bool branch_taken_0x14b264 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B264u;
        // 0x14b268: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b264) {
            ctx->pc = 0x14B27Cu;
            goto label_14b27c;
        }
    }
    ctx->pc = 0x14B26Cu;
    // 0x14b26c: 0x8e23004c  lw          $v1, 0x4C($s1)
    ctx->pc = 0x14b26cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x14b270: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x14b270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x14b274: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x14B274u;
    {
        const bool branch_taken_0x14b274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B274u;
        // 0x14b278: 0x2c430001  sltiu       $v1, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b274) {
            ctx->pc = 0x14B280u;
            goto label_14b280;
        }
    }
    ctx->pc = 0x14B27Cu;
label_14b27c:
    // 0x14b27c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x14b27cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14b280:
    // 0x14b280: 0x10600050  beqz        $v1, . + 4 + (0x50 << 2)
    ctx->pc = 0x14B280u;
    {
        const bool branch_taken_0x14b280 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B280u;
        // 0x14b284: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b280) {
            ctx->pc = 0x14B3C4u;
            goto label_14b3c4;
        }
    }
    ctx->pc = 0x14B288u;
    // 0x14b288: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x14b288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x14b28c: 0xc07600c  jal         func_1D8030
    ctx->pc = 0x14B28Cu;
    SET_GPR_U32(ctx, 31, 0x14B294u);
    ctx->pc = 0x14B290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B28Cu;
    // 0x14b290: 0xc4540100  lwc1        $f20, 0x100($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D8030u, 0x14B28Cu, 0x14B294u)) {
        return;
    }
    ctx->pc = 0x14B294u;
label_14b294:
    // 0x14b294: 0x8c500014  lw          $s0, 0x14($v0)
    ctx->pc = 0x14b294u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x14b298: 0x8e220064  lw          $v0, 0x64($s1)
    ctx->pc = 0x14b298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
    // 0x14b29c: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x14B29Cu;
    {
        const bool branch_taken_0x14b29c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14B2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B29Cu;
        // 0x14b2a0: 0x3c120034  lui         $s2, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b29c) {
            ctx->pc = 0x14B348u;
            goto label_14b348;
        }
    }
    ctx->pc = 0x14B2A4u;
    // 0x14b2a4: 0x8e4284ec  lw          $v0, -0x7B14($s2)
    ctx->pc = 0x14b2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294935788)));
    // 0x14b2a8: 0x54400025  bnel        $v0, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x14B2A8u;
    {
        const bool branch_taken_0x14b2a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14b2a8) {
            ctx->pc = 0x14B2ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14B2A8u;
            // 0x14b2ac: 0x8e220064  lw          $v0, 0x64($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14B340u;
            goto label_14b340;
        }
    }
    ctx->pc = 0x14B2B0u;
    // 0x14b2b0: 0xc0691ec  jal         func_1A47B0
    ctx->pc = 0x14B2B0u;
    SET_GPR_U32(ctx, 31, 0x14B2B8u);
    ctx->pc = 0x1A47B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A47B0u, 0x14B2B0u, 0x14B2B8u)) {
        return;
    }
    ctx->pc = 0x14B2B8u;
label_14b2b8:
    // 0x14b2b8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x14b2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x14b2bc: 0x2c630003  sltiu       $v1, $v1, 0x3
    ctx->pc = 0x14b2bcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x14b2c0: 0x5060001f  beql        $v1, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x14B2C0u;
    {
        const bool branch_taken_0x14b2c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14b2c0) {
            ctx->pc = 0x14B2C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14B2C0u;
            // 0x14b2c4: 0x8e220064  lw          $v0, 0x64($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14B340u;
            goto label_14b340;
        }
    }
    ctx->pc = 0x14B2C8u;
    // 0x14b2c8: 0x1200003d  beqz        $s0, . + 4 + (0x3D << 2)
    ctx->pc = 0x14B2C8u;
    {
        const bool branch_taken_0x14b2c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B2C8u;
        // 0x14b2cc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b2c8) {
            ctx->pc = 0x14B3C0u;
            goto label_14b3c0;
        }
    }
    ctx->pc = 0x14B2D0u;
    // 0x14b2d0: 0xc04f0c2  jal         func_13C308
    ctx->pc = 0x14B2D0u;
    SET_GPR_U32(ctx, 31, 0x14B2D8u);
    ctx->pc = 0x14B2D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B2D0u;
    // 0x14b2d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C308u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C308u, 0x14B2D0u, 0x14B2D8u)) {
        return;
    }
    ctx->pc = 0x14B2D8u;
label_14b2d8:
    // 0x14b2d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14b2d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b2dc: 0xc049bc8  jal         func_126F20
    ctx->pc = 0x14B2DCu;
    SET_GPR_U32(ctx, 31, 0x14B2E4u);
    ctx->pc = 0x14B2E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B2DCu;
    // 0x14b2e0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126F20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x126F20u, 0x14B2DCu, 0x14B2E4u)) {
        return;
    }
    ctx->pc = 0x14B2E4u;
label_14b2e4:
    // 0x14b2e4: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x14b2e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x14b2e8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x14b2e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14b2ec: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x14b2ecu;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x14b2f0: 0x3c0140c0  lui         $at, 0x40C0
    ctx->pc = 0x14b2f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16576 << 16));
    // 0x14b2f4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x14b2f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14b2f8: 0x4601a040  add.s       $f1, $f20, $f1
    ctx->pc = 0x14b2f8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
    // 0x14b2fc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x14b2fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x14b300: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x14b300u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x14b304: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x14b304u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14b308: 0x0  nop
    ctx->pc = 0x14b308u;
    // NOP
    // 0x14b30c: 0x4500002d  bc1f        . + 4 + (0x2D << 2)
    ctx->pc = 0x14B30Cu;
    {
        const bool branch_taken_0x14b30c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x14B310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B30Cu;
        // 0x14b310: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b30c) {
            ctx->pc = 0x14B3C4u;
            goto label_14b3c4;
        }
    }
    ctx->pc = 0x14B314u;
    // 0x14b314: 0x46010802  mul.s       $f0, $f1, $f1
    ctx->pc = 0x14b314u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x14b318: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x14b318u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14b31c: 0x0  nop
    ctx->pc = 0x14b31cu;
    // NOP
    // 0x14b320: 0x45020029  bc1fl       . + 4 + (0x29 << 2)
    ctx->pc = 0x14B320u;
    {
        const bool branch_taken_0x14b320 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14b320) {
            ctx->pc = 0x14B324u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14B320u;
            // 0x14b324: 0x7bb10050  lq          $s1, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14B3C8u;
            goto label_14b3c8;
        }
    }
    ctx->pc = 0x14B328u;
    // 0x14b328: 0xc052de8  jal         func_14B7A0
    ctx->pc = 0x14B328u;
    SET_GPR_U32(ctx, 31, 0x14B330u);
    ctx->pc = 0x14B32Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B328u;
    // 0x14b32c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B7A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x14B7A0u, 0x14B328u, 0x14B330u)) {
        return;
    }
    ctx->pc = 0x14B330u;
label_14b330:
    // 0x14b330: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14b330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14b334: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x14b334u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
    // 0x14b338: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x14B338u;
    {
        const bool branch_taken_0x14b338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B338u;
        // 0x14b33c: 0xae4284ec  sw          $v0, -0x7B14($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4294935788), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b338) {
            ctx->pc = 0x14B3C0u;
            goto label_14b3c0;
        }
    }
    ctx->pc = 0x14B340u;
label_14b340:
    // 0x14b340: 0x50400020  beql        $v0, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x14B340u;
    {
        const bool branch_taken_0x14b340 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14b340) {
            ctx->pc = 0x14B344u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14B340u;
            // 0x14b344: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14B3C4u;
            goto label_14b3c4;
        }
    }
    ctx->pc = 0x14B348u;
label_14b348:
    // 0x14b348: 0x5200001e  beql        $s0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x14B348u;
    {
        const bool branch_taken_0x14b348 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x14b348) {
            ctx->pc = 0x14B34Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14B348u;
            // 0x14b34c: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14B3C4u;
            goto label_14b3c4;
        }
    }
    ctx->pc = 0x14B350u;
    // 0x14b350: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x14b350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
    // 0x14b354: 0x5080001b  beql        $a0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x14B354u;
    {
        const bool branch_taken_0x14b354 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14b354) {
            ctx->pc = 0x14B358u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14B354u;
            // 0x14b358: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14B3C4u;
            goto label_14b3c4;
        }
    }
    ctx->pc = 0x14B35Cu;
    // 0x14b35c: 0xc04f0cc  jal         func_13C330
    ctx->pc = 0x14B35Cu;
    SET_GPR_U32(ctx, 31, 0x14B364u);
    ctx->pc = 0x14B360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B35Cu;
    // 0x14b360: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x14B35Cu, 0x14B364u)) {
        return;
    }
    ctx->pc = 0x14B364u;
label_14b364:
    // 0x14b364: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x14b364u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x14b368: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x14b368u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x14b36c: 0x8c460008  lw          $a2, 0x8($v0)
    ctx->pc = 0x14b36cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x14b370: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x14b370u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14b374: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x14b374u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14b378: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14b378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b37c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x14b37cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b380: 0xc049bc8  jal         func_126F20
    ctx->pc = 0x14B380u;
    SET_GPR_U32(ctx, 31, 0x14B388u);
    ctx->pc = 0x14B384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B380u;
    // 0x14b384: 0xafa60008  sw          $a2, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126F20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x126F20u, 0x14B380u, 0x14B388u)) {
        return;
    }
    ctx->pc = 0x14B388u;
label_14b388:
    // 0x14b388: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x14b388u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x14b38c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x14b38cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14b390: 0x3c0140c0  lui         $at, 0x40C0
    ctx->pc = 0x14b390u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16576 << 16));
    // 0x14b394: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x14b394u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x14b398: 0x4601a040  add.s       $f1, $f20, $f1
    ctx->pc = 0x14b398u;
    ctx->f[1] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
    // 0x14b39c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x14b39cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x14b3a0: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x14b3a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x14b3a4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x14b3a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14b3a8: 0x0  nop
    ctx->pc = 0x14b3a8u;
    // NOP
    // 0x14b3ac: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x14B3ACu;
    {
        const bool branch_taken_0x14b3ac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x14B3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B3ACu;
        // 0x14b3b0: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b3ac) {
            ctx->pc = 0x14B3C4u;
            goto label_14b3c4;
        }
    }
    ctx->pc = 0x14B3B4u;
    // 0x14b3b4: 0xc052dd8  jal         func_14B760
    ctx->pc = 0x14B3B4u;
    SET_GPR_U32(ctx, 31, 0x14B3BCu);
    ctx->pc = 0x14B3B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B3B4u;
    // 0x14b3b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B760u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x14B760u, 0x14B3B4u, 0x14B3BCu)) {
        return;
    }
    ctx->pc = 0x14B3BCu;
label_14b3bc:
    // 0x14b3bc: 0xae200064  sw          $zero, 0x64($s1)
    ctx->pc = 0x14b3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 0));
label_14b3c0:
    // 0x14b3c0: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x14b3c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_14b3c4:
    // 0x14b3c4: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x14b3c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_14b3c8:
    // 0x14b3c8: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x14b3c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14b3cc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x14b3ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14b3d0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x14b3d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14b3d4: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x14b3d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x14b3d8: 0x3e00008  jr          $ra
    ctx->pc = 0x14B3D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14B3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B3D8u;
        // 0x14b3dc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14B3D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14B3E0u;
}
