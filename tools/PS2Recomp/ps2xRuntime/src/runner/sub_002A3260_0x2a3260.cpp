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

// Function: sub_002A3260
// Address: 0x2a3260 - 0x2a3318
void sub_002A3260_0x2a3260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A3260_0x2a3260");
#endif

    switch (ctx->pc) {
        case 0x2a3260u: goto label_2a3260;
        case 0x2a3264u: goto label_2a3264;
        case 0x2a3268u: goto label_2a3268;
        case 0x2a326cu: goto label_2a326c;
        case 0x2a3270u: goto label_2a3270;
        case 0x2a3274u: goto label_2a3274;
        case 0x2a3278u: goto label_2a3278;
        case 0x2a327cu: goto label_2a327c;
        case 0x2a3280u: goto label_2a3280;
        case 0x2a3284u: goto label_2a3284;
        case 0x2a3288u: goto label_2a3288;
        case 0x2a328cu: goto label_2a328c;
        case 0x2a3290u: goto label_2a3290;
        case 0x2a3294u: goto label_2a3294;
        case 0x2a3298u: goto label_2a3298;
        case 0x2a329cu: goto label_2a329c;
        case 0x2a32a0u: goto label_2a32a0;
        case 0x2a32a4u: goto label_2a32a4;
        case 0x2a32a8u: goto label_2a32a8;
        case 0x2a32acu: goto label_2a32ac;
        case 0x2a32b0u: goto label_2a32b0;
        case 0x2a32b4u: goto label_2a32b4;
        case 0x2a32b8u: goto label_2a32b8;
        case 0x2a32bcu: goto label_2a32bc;
        case 0x2a32c0u: goto label_2a32c0;
        case 0x2a32c4u: goto label_2a32c4;
        case 0x2a32c8u: goto label_2a32c8;
        case 0x2a32ccu: goto label_2a32cc;
        case 0x2a32d0u: goto label_2a32d0;
        case 0x2a32d4u: goto label_2a32d4;
        case 0x2a32d8u: goto label_2a32d8;
        case 0x2a32dcu: goto label_2a32dc;
        case 0x2a32e0u: goto label_2a32e0;
        case 0x2a32e4u: goto label_2a32e4;
        case 0x2a32e8u: goto label_2a32e8;
        case 0x2a32ecu: goto label_2a32ec;
        case 0x2a32f0u: goto label_2a32f0;
        case 0x2a32f4u: goto label_2a32f4;
        case 0x2a32f8u: goto label_2a32f8;
        case 0x2a32fcu: goto label_2a32fc;
        case 0x2a3300u: goto label_2a3300;
        case 0x2a3304u: goto label_2a3304;
        case 0x2a3308u: goto label_2a3308;
        case 0x2a330cu: goto label_2a330c;
        case 0x2a3310u: goto label_2a3310;
        case 0x2a3314u: goto label_2a3314;
        default: break;
    }

    ctx->pc = 0x2a3260u;

label_2a3260:
    // 0x2a3260: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a3260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2a3264:
    // 0x2a3264: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2a3264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_2a3268:
    // 0x2a3268: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a3268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2a326c:
    // 0x2a326c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2a326cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2a3270:
    // 0x2a3270: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a3270u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a3274:
    // 0x2a3274: 0x8e060014  lw          $a2, 0x14($s0)
    ctx->pc = 0x2a3274u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_2a3278:
    // 0x2a3278: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x2a3278u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2a327c:
    // 0x2a327c: 0xa6102b  sltu        $v0, $a1, $a2
    ctx->pc = 0x2a327cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_2a3280:
    // 0x2a3280: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2a3284:
    if (ctx->pc == 0x2A3284u) {
        ctx->pc = 0x2A3284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3280u;
        // 0x2a3284: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3288u;
        goto label_2a3288;
    }
    ctx->pc = 0x2A3280u;
    {
        const bool branch_taken_0x2a3280 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3280u;
        // 0x2a3284: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3280) {
            ctx->pc = 0x2A3298u;
            goto label_2a3298;
        }
    }
    ctx->pc = 0x2A3288u;
label_2a3288:
    // 0x2a3288: 0xc0a8ba6  jal         func_2A2E98
label_2a328c:
    if (ctx->pc == 0x2A328Cu) {
        ctx->pc = 0x2A328Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3288u;
        // 0x2a328c: 0xc53023  subu        $a2, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3290u;
        goto label_2a3290;
    }
    ctx->pc = 0x2A3288u;
    SET_GPR_U32(ctx, 31, 0x2A3290u);
    ctx->pc = 0x2A328Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3288u;
    // 0x2a328c: 0xc53023  subu        $a2, $a2, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2E98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A2E98u, 0x2A3288u, 0x2A3290u)) {
        return;
    }
    ctx->pc = 0x2A3290u;
label_2a3290:
    // 0x2a3290: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
label_2a3294:
    if (ctx->pc == 0x2A3294u) {
        ctx->pc = 0x2A3294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3290u;
        // 0x2a3294: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3298u;
        goto label_2a3298;
    }
    ctx->pc = 0x2A3290u;
    {
        const bool branch_taken_0x2a3290 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A3294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3290u;
        // 0x2a3294: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3290) {
            ctx->pc = 0x2A3304u;
            goto label_2a3304;
        }
    }
    ctx->pc = 0x2A3298u;
label_2a3298:
    // 0x2a3298: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2a3298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2a329c:
    // 0x2a329c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2a329cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2a32a0:
    // 0x2a32a0: 0x622823  subu        $a1, $v1, $v0
    ctx->pc = 0x2a32a0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2a32a4:
    // 0x2a32a4: 0x10a00012  beqz        $a1, . + 4 + (0x12 << 2)
label_2a32a8:
    if (ctx->pc == 0x2A32A8u) {
        ctx->pc = 0x2A32A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A32A4u;
        // 0x2a32a8: 0x5283c  dsll32      $a1, $a1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A32ACu;
        goto label_2a32ac;
    }
    ctx->pc = 0x2A32A4u;
    {
        const bool branch_taken_0x2a32a4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A32A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A32A4u;
        // 0x2a32a8: 0x5283c  dsll32      $a1, $a1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a32a4) {
            ctx->pc = 0x2A32F0u;
            goto label_2a32f0;
        }
    }
    ctx->pc = 0x2A32ACu;
label_2a32ac:
    // 0x2a32ac: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x2a32acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_2a32b0:
    // 0x2a32b0: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x2a32b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
label_2a32b4:
    // 0x2a32b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a32b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a32b8:
    // 0x2a32b8: 0x8c62007c  lw          $v0, 0x7C($v1)
    ctx->pc = 0x2a32b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
label_2a32bc:
    // 0x2a32bc: 0x40f809  jalr        $v0
label_2a32c0:
    if (ctx->pc == 0x2A32C0u) {
        ctx->pc = 0x2A32C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A32BCu;
        // 0x2a32c0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A32C4u;
        goto label_2a32c4;
    }
    ctx->pc = 0x2A32BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A32C4u);
        ctx->pc = 0x2A32C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A32BCu;
        // 0x2a32c0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A32BCu, 0x2A32C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A32C4u;
label_2a32c4:
    // 0x2a32c4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2a32c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2a32c8:
    // 0x2a32c8: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
label_2a32cc:
    if (ctx->pc == 0x2A32CCu) {
        ctx->pc = 0x2A32D0u;
        goto label_2a32d0;
    }
    ctx->pc = 0x2A32C8u;
    {
        const bool branch_taken_0x2a32c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2a32c8) {
            ctx->pc = 0x2A32DCu;
            goto label_2a32dc;
        }
    }
    ctx->pc = 0x2A32D0u;
label_2a32d0:
    // 0x2a32d0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2a32d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2a32d4:
    // 0x2a32d4: 0x10000006  b           . + 4 + (0x6 << 2)
label_2a32d8:
    if (ctx->pc == 0x2A32D8u) {
        ctx->pc = 0x2A32D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A32D4u;
        // 0x2a32d8: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A32DCu;
        goto label_2a32dc;
    }
    ctx->pc = 0x2A32D4u;
    {
        const bool branch_taken_0x2a32d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A32D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A32D4u;
        // 0x2a32d8: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a32d4) {
            ctx->pc = 0x2A32F0u;
            goto label_2a32f0;
        }
    }
    ctx->pc = 0x2A32DCu;
label_2a32dc:
    // 0x2a32dc: 0xc0c489a  jal         func_312268
label_2a32e0:
    if (ctx->pc == 0x2A32E0u) {
        ctx->pc = 0x2A32E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A32DCu;
        // 0x2a32e0: 0x2411ffff  addiu       $s1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A32E4u;
        goto label_2a32e4;
    }
    ctx->pc = 0x2A32DCu;
    SET_GPR_U32(ctx, 31, 0x2A32E4u);
    ctx->pc = 0x2A32E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A32DCu;
    // 0x2a32e0: 0x2411ffff  addiu       $s1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312268u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x312268u, 0x2A32DCu, 0x2A32E4u)) {
        return;
    }
    ctx->pc = 0x2A32E4u;
label_2a32e4:
    // 0x2a32e4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2a32e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2a32e8:
    // 0x2a32e8: 0x3863001d  xori        $v1, $v1, 0x1D
    ctx->pc = 0x2a32e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)29);
label_2a32ec:
    // 0x2a32ec: 0x3880a  movz        $s1, $zero, $v1
    ctx->pc = 0x2a32ecu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0));
label_2a32f0:
    // 0x2a32f0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2a32f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2a32f4:
    // 0x2a32f4: 0x12220002  beq         $s1, $v0, . + 4 + (0x2 << 2)
label_2a32f8:
    if (ctx->pc == 0x2A32F8u) {
        ctx->pc = 0x2A32F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A32F4u;
        // 0x2a32f8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A32FCu;
        goto label_2a32fc;
    }
    ctx->pc = 0x2A32F4u;
    {
        const bool branch_taken_0x2a32f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A32F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A32F4u;
        // 0x2a32f8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a32f4) {
            ctx->pc = 0x2A3300u;
            goto label_2a3300;
        }
    }
    ctx->pc = 0x2A32FCu;
label_2a32fc:
    // 0x2a32fc: 0xfe020040  sd          $v0, 0x40($s0)
    ctx->pc = 0x2a32fcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 64), GPR_U64(ctx, 2));
label_2a3300:
    // 0x2a3300: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2a3300u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2a3304:
    // 0x2a3304: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2a3304u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2a3308:
    // 0x2a3308: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2a3308u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2a330c:
    // 0x2a330c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a330cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2a3310:
    // 0x2a3310: 0x3e00008  jr          $ra
label_2a3314:
    if (ctx->pc == 0x2A3314u) {
        ctx->pc = 0x2A3314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3310u;
        // 0x2a3314: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3318u;
        goto label_fallthrough_0x2a3310;
    }
    ctx->pc = 0x2A3310u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A3314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3310u;
        // 0x2a3314: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A3310u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2a3310:
    ctx->pc = 0x2A3318u;
}
