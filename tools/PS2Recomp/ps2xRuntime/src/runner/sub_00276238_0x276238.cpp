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

// Function: sub_00276238
// Address: 0x276238 - 0x276310
void sub_00276238_0x276238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00276238_0x276238");
#endif

    switch (ctx->pc) {
        case 0x276238u: goto label_276238;
        case 0x27623cu: goto label_27623c;
        case 0x276240u: goto label_276240;
        case 0x276244u: goto label_276244;
        case 0x276248u: goto label_276248;
        case 0x27624cu: goto label_27624c;
        case 0x276250u: goto label_276250;
        case 0x276254u: goto label_276254;
        case 0x276258u: goto label_276258;
        case 0x27625cu: goto label_27625c;
        case 0x276260u: goto label_276260;
        case 0x276264u: goto label_276264;
        case 0x276268u: goto label_276268;
        case 0x27626cu: goto label_27626c;
        case 0x276270u: goto label_276270;
        case 0x276274u: goto label_276274;
        case 0x276278u: goto label_276278;
        case 0x27627cu: goto label_27627c;
        case 0x276280u: goto label_276280;
        case 0x276284u: goto label_276284;
        case 0x276288u: goto label_276288;
        case 0x27628cu: goto label_27628c;
        case 0x276290u: goto label_276290;
        case 0x276294u: goto label_276294;
        case 0x276298u: goto label_276298;
        case 0x27629cu: goto label_27629c;
        case 0x2762a0u: goto label_2762a0;
        case 0x2762a4u: goto label_2762a4;
        case 0x2762a8u: goto label_2762a8;
        case 0x2762acu: goto label_2762ac;
        case 0x2762b0u: goto label_2762b0;
        case 0x2762b4u: goto label_2762b4;
        case 0x2762b8u: goto label_2762b8;
        case 0x2762bcu: goto label_2762bc;
        case 0x2762c0u: goto label_2762c0;
        case 0x2762c4u: goto label_2762c4;
        case 0x2762c8u: goto label_2762c8;
        case 0x2762ccu: goto label_2762cc;
        case 0x2762d0u: goto label_2762d0;
        case 0x2762d4u: goto label_2762d4;
        case 0x2762d8u: goto label_2762d8;
        case 0x2762dcu: goto label_2762dc;
        case 0x2762e0u: goto label_2762e0;
        case 0x2762e4u: goto label_2762e4;
        case 0x2762e8u: goto label_2762e8;
        case 0x2762ecu: goto label_2762ec;
        case 0x2762f0u: goto label_2762f0;
        case 0x2762f4u: goto label_2762f4;
        case 0x2762f8u: goto label_2762f8;
        case 0x2762fcu: goto label_2762fc;
        case 0x276300u: goto label_276300;
        case 0x276304u: goto label_276304;
        case 0x276308u: goto label_276308;
        case 0x27630cu: goto label_27630c;
        default: break;
    }

    ctx->pc = 0x276238u;

label_276238:
    // 0x276238: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x276238u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_27623c:
    // 0x27623c: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x27623cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_276240:
    // 0x276240: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x276240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_276244:
    // 0x276244: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x276244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_276248:
    // 0x276248: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x276248u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_27624c:
    // 0x27624c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x27624cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_276250:
    // 0x276250: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x276250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_276254:
    // 0x276254: 0xc09d8c4  jal         func_276310
label_276258:
    if (ctx->pc == 0x276258u) {
        ctx->pc = 0x276258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276254u;
        // 0x276258: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27625Cu;
        goto label_27625c;
    }
    ctx->pc = 0x276254u;
    SET_GPR_U32(ctx, 31, 0x27625Cu);
    ctx->pc = 0x276258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276254u;
    // 0x276258: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276310u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x276310u, 0x276254u, 0x27625Cu)) {
        return;
    }
    ctx->pc = 0x27625Cu;
label_27625c:
    // 0x27625c: 0x3c070003  lui         $a3, 0x3
    ctx->pc = 0x27625cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
label_276260:
    // 0x276260: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x276260u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_276264:
    // 0x276264: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x276264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_276268:
    // 0x276268: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x276268u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_27626c:
    // 0x27626c: 0x24080065  addiu       $t0, $zero, 0x65
    ctx->pc = 0x27626cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
label_276270:
    // 0x276270: 0xc0926f4  jal         func_249BD0
label_276274:
    if (ctx->pc == 0x276274u) {
        ctx->pc = 0x276274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276270u;
        // 0x276274: 0x34e77002  ori         $a3, $a3, 0x7002 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)28674);
        ctx->in_delay_slot = false;
        ctx->pc = 0x276278u;
        goto label_276278;
    }
    ctx->pc = 0x276270u;
    SET_GPR_U32(ctx, 31, 0x276278u);
    ctx->pc = 0x276274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276270u;
    // 0x276274: 0x34e77002  ori         $a3, $a3, 0x7002 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)28674);
    ctx->in_delay_slot = false;
    ctx->pc = 0x249BD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249BD0u, 0x276270u, 0x276278u)) {
        return;
    }
    ctx->pc = 0x276278u;
label_276278:
    // 0x276278: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x276278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27627c:
    // 0x27627c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x27627cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_276280:
    // 0x276280: 0xc092782  jal         func_249E08
label_276284:
    if (ctx->pc == 0x276284u) {
        ctx->pc = 0x276284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276280u;
        // 0x276284: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x276288u;
        goto label_276288;
    }
    ctx->pc = 0x276280u;
    SET_GPR_U32(ctx, 31, 0x276288u);
    ctx->pc = 0x276284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276280u;
    // 0x276284: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x276280u, 0x276288u)) {
        return;
    }
    ctx->pc = 0x276288u;
label_276288:
    // 0x276288: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_27628c:
    if (ctx->pc == 0x27628Cu) {
        ctx->pc = 0x27628Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276288u;
        // 0x27628c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x276290u;
        goto label_276290;
    }
    ctx->pc = 0x276288u;
    {
        const bool branch_taken_0x276288 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27628Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276288u;
        // 0x27628c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276288) {
            ctx->pc = 0x2762F8u;
            goto label_2762f8;
        }
    }
    ctx->pc = 0x276290u;
label_276290:
    // 0x276290: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x276290u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_276294:
    // 0x276294: 0xc092782  jal         func_249E08
label_276298:
    if (ctx->pc == 0x276298u) {
        ctx->pc = 0x276298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276294u;
        // 0x276298: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27629Cu;
        goto label_27629c;
    }
    ctx->pc = 0x276294u;
    SET_GPR_U32(ctx, 31, 0x27629Cu);
    ctx->pc = 0x276298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276294u;
    // 0x276298: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x276294u, 0x27629Cu)) {
        return;
    }
    ctx->pc = 0x27629Cu;
label_27629c:
    // 0x27629c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_2762a0:
    if (ctx->pc == 0x2762A0u) {
        ctx->pc = 0x2762A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27629Cu;
        // 0x2762a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2762A4u;
        goto label_2762a4;
    }
    ctx->pc = 0x27629Cu;
    {
        const bool branch_taken_0x27629c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2762A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27629Cu;
        // 0x2762a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27629c) {
            ctx->pc = 0x2762F8u;
            goto label_2762f8;
        }
    }
    ctx->pc = 0x2762A4u;
label_2762a4:
    // 0x2762a4: 0x26250004  addiu       $a1, $s1, 0x4
    ctx->pc = 0x2762a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_2762a8:
    // 0x2762a8: 0xc092782  jal         func_249E08
label_2762ac:
    if (ctx->pc == 0x2762ACu) {
        ctx->pc = 0x2762ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2762A8u;
        // 0x2762ac: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2762B0u;
        goto label_2762b0;
    }
    ctx->pc = 0x2762A8u;
    SET_GPR_U32(ctx, 31, 0x2762B0u);
    ctx->pc = 0x2762ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2762A8u;
    // 0x2762ac: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x2762A8u, 0x2762B0u)) {
        return;
    }
    ctx->pc = 0x2762B0u;
label_2762b0:
    // 0x2762b0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_2762b4:
    if (ctx->pc == 0x2762B4u) {
        ctx->pc = 0x2762B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2762B0u;
        // 0x2762b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2762B8u;
        goto label_2762b8;
    }
    ctx->pc = 0x2762B0u;
    {
        const bool branch_taken_0x2762b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2762B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2762B0u;
        // 0x2762b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2762b0) {
            ctx->pc = 0x2762F8u;
            goto label_2762f8;
        }
    }
    ctx->pc = 0x2762B8u;
label_2762b8:
    // 0x2762b8: 0x26250008  addiu       $a1, $s1, 0x8
    ctx->pc = 0x2762b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_2762bc:
    // 0x2762bc: 0xc092782  jal         func_249E08
label_2762c0:
    if (ctx->pc == 0x2762C0u) {
        ctx->pc = 0x2762C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2762BCu;
        // 0x2762c0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2762C4u;
        goto label_2762c4;
    }
    ctx->pc = 0x2762BCu;
    SET_GPR_U32(ctx, 31, 0x2762C4u);
    ctx->pc = 0x2762C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2762BCu;
    // 0x2762c0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x2762BCu, 0x2762C4u)) {
        return;
    }
    ctx->pc = 0x2762C4u;
label_2762c4:
    // 0x2762c4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_2762c8:
    if (ctx->pc == 0x2762C8u) {
        ctx->pc = 0x2762C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2762C4u;
        // 0x2762c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2762CCu;
        goto label_2762cc;
    }
    ctx->pc = 0x2762C4u;
    {
        const bool branch_taken_0x2762c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2762C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2762C4u;
        // 0x2762c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2762c4) {
            ctx->pc = 0x2762F8u;
            goto label_2762f8;
        }
    }
    ctx->pc = 0x2762CCu;
label_2762cc:
    // 0x2762cc: 0x2625000c  addiu       $a1, $s1, 0xC
    ctx->pc = 0x2762ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
label_2762d0:
    // 0x2762d0: 0xc09275c  jal         func_249D70
label_2762d4:
    if (ctx->pc == 0x2762D4u) {
        ctx->pc = 0x2762D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2762D0u;
        // 0x2762d4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2762D8u;
        goto label_2762d8;
    }
    ctx->pc = 0x2762D0u;
    SET_GPR_U32(ctx, 31, 0x2762D8u);
    ctx->pc = 0x2762D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2762D0u;
    // 0x2762d4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249D70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249D70u, 0x2762D0u, 0x2762D8u)) {
        return;
    }
    ctx->pc = 0x2762D8u;
label_2762d8:
    // 0x2762d8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2762dc:
    if (ctx->pc == 0x2762DCu) {
        ctx->pc = 0x2762DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2762D8u;
        // 0x2762dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2762E0u;
        goto label_2762e0;
    }
    ctx->pc = 0x2762D8u;
    {
        const bool branch_taken_0x2762d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2762DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2762D8u;
        // 0x2762dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2762d8) {
            ctx->pc = 0x2762F8u;
            goto label_2762f8;
        }
    }
    ctx->pc = 0x2762E0u;
label_2762e0:
    // 0x2762e0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2762e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2762e4:
    // 0x2762e4: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x2762e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_2762e8:
    // 0x2762e8: 0x40f809  jalr        $v0
label_2762ec:
    if (ctx->pc == 0x2762ECu) {
        ctx->pc = 0x2762ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2762E8u;
        // 0x2762ec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2762F0u;
        goto label_2762f0;
    }
    ctx->pc = 0x2762E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2762F0u);
        ctx->pc = 0x2762ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2762E8u;
        // 0x2762ec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2762E8u, 0x2762F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2762F0u;
label_2762f0:
    // 0x2762f0: 0x10000002  b           . + 4 + (0x2 << 2)
label_2762f4:
    if (ctx->pc == 0x2762F4u) {
        ctx->pc = 0x2762F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2762F0u;
        // 0x2762f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2762F8u;
        goto label_2762f8;
    }
    ctx->pc = 0x2762F0u;
    {
        const bool branch_taken_0x2762f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2762F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2762F0u;
        // 0x2762f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2762f0) {
            ctx->pc = 0x2762FCu;
            goto label_2762fc;
        }
    }
    ctx->pc = 0x2762F8u;
label_2762f8:
    // 0x2762f8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2762f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2762fc:
    // 0x2762fc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2762fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_276300:
    // 0x276300: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x276300u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_276304:
    // 0x276304: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x276304u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_276308:
    // 0x276308: 0x3e00008  jr          $ra
label_27630c:
    if (ctx->pc == 0x27630Cu) {
        ctx->pc = 0x27630Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276308u;
        // 0x27630c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x276310u;
        goto label_fallthrough_0x276308;
    }
    ctx->pc = 0x276308u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27630Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276308u;
        // 0x27630c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x276308u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x276308:
    ctx->pc = 0x276310u;
}
