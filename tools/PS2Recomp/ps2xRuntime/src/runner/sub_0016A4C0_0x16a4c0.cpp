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

// Function: sub_0016A4C0
// Address: 0x16a4c0 - 0x16a5a0
void sub_0016A4C0_0x16a4c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016A4C0_0x16a4c0");
#endif

    switch (ctx->pc) {
        case 0x16a4e0u: goto label_16a4e0;
        case 0x16a4f4u: goto label_16a4f4;
        case 0x16a510u: goto label_16a510;
        case 0x16a544u: goto label_16a544;
        case 0x16a578u: goto label_16a578;
        default: break;
    }

    ctx->pc = 0x16a4c0u;

    // 0x16a4c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x16a4c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x16a4c4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x16a4c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x16a4c8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x16a4c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x16a4cc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x16a4ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a4d0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x16a4d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x16a4d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16a4d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16a4d8: 0xc04efda  jal         func_13BF68
    ctx->pc = 0x16A4D8u;
    SET_GPR_U32(ctx, 31, 0x16A4E0u);
    ctx->pc = 0x16A4DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A4D8u;
    // 0x16a4dc: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BF68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13BF68u, 0x16A4D8u, 0x16A4E0u)) {
        return;
    }
    ctx->pc = 0x16A4E0u;
label_16a4e0:
    // 0x16a4e0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x16a4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x16a4e4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16a4e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a4e8: 0x8c46f648  lw          $a2, -0x9B8($v0)
    ctx->pc = 0x16a4e8u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6BF648u));
    // 0x16a4ec: 0xc07f1c0  jal         func_1FC700
    ctx->pc = 0x16A4ECu;
    SET_GPR_U32(ctx, 31, 0x16A4F4u);
    ctx->pc = 0x16A4F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A4ECu;
    // 0x16a4f0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x16A4ECu, 0x16A4F4u)) {
        return;
    }
    ctx->pc = 0x16A4F4u;
label_16a4f4:
    // 0x16a4f4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x16a4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16a4f8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x16a4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16a4fc: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x16A4FCu;
    {
        const bool branch_taken_0x16a4fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A4FCu;
        // 0x16a500: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a4fc) {
            ctx->pc = 0x16A588u;
            goto label_16a588;
        }
    }
    ctx->pc = 0x16A504u;
    // 0x16a504: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x16a504u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16a508: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x16a508u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16a50c: 0x0  nop
    ctx->pc = 0x16a50cu;
    // NOP
label_16a510:
    // 0x16a510: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x16a510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x16a514: 0x5052000d  beql        $v0, $s2, . + 4 + (0xD << 2)
    ctx->pc = 0x16A514u;
    {
        const bool branch_taken_0x16a514 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x16a514) {
            ctx->pc = 0x16A518u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16A514u;
            // 0x16a518: 0xc4c00008  lwc1        $f0, 0x8($a2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x16A54Cu;
            goto label_16a54c;
        }
    }
    ctx->pc = 0x16A51Cu;
    // 0x16a51c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x16A51Cu;
    {
        const bool branch_taken_0x16a51c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a51c) {
            ctx->pc = 0x16A520u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16A51Cu;
            // 0x16a520: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16A534u;
            goto label_16a534;
        }
    }
    ctx->pc = 0x16A524u;
    // 0x16a524: 0x1050000b  beq         $v0, $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x16A524u;
    {
        const bool branch_taken_0x16a524 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x16A528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A524u;
        // 0x16a528: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a524) {
            ctx->pc = 0x16A554u;
            goto label_16a554;
        }
    }
    ctx->pc = 0x16A52Cu;
    // 0x16a52c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x16A52Cu;
    {
        const bool branch_taken_0x16a52c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A52Cu;
        // 0x16a530: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a52c) {
            ctx->pc = 0x16A564u;
            goto label_16a564;
        }
    }
    ctx->pc = 0x16A534u;
label_16a534:
    // 0x16a534: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x16a534u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x16a538: 0x26250044  addiu       $a1, $s1, 0x44
    ctx->pc = 0x16a538u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
    // 0x16a53c: 0xc07fcf4  jal         func_1FF3D0
    ctx->pc = 0x16A53Cu;
    SET_GPR_U32(ctx, 31, 0x16A544u);
    ctx->pc = 0x16A540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A53Cu;
    // 0x16a540: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF3D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF3D0u, 0x16A53Cu, 0x16A544u)) {
        return;
    }
    ctx->pc = 0x16A544u;
label_16a544:
    // 0x16a544: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x16A544u;
    {
        const bool branch_taken_0x16a544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A544u;
        // 0x16a548: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a544) {
            ctx->pc = 0x16A560u;
            goto label_16a560;
        }
    }
    ctx->pc = 0x16A54Cu;
label_16a54c:
    // 0x16a54c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x16A54Cu;
    {
        const bool branch_taken_0x16a54c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A54Cu;
        // 0x16a550: 0xe620004c  swc1        $f0, 0x4C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 76), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a54c) {
            ctx->pc = 0x16A55Cu;
            goto label_16a55c;
        }
    }
    ctx->pc = 0x16A554u;
label_16a554:
    // 0x16a554: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x16a554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16a558: 0xe6200050  swc1        $f0, 0x50($s1)
    ctx->pc = 0x16a558u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 80), bits); }
label_16a55c:
    // 0x16a55c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x16a55cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_16a560:
    // 0x16a560: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x16a560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_16a564:
    // 0x16a564: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x16a564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16a568: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x16a568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16a56c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16a56cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16a570: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x16A570u;
    SET_GPR_U32(ctx, 31, 0x16A578u);
    ctx->pc = 0x16A574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A570u;
    // 0x16a574: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x16A570u, 0x16A578u)) {
        return;
    }
    ctx->pc = 0x16A578u;
label_16a578:
    // 0x16a578: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x16a578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16a57c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x16a57cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16a580: 0x1460ffe3  bnez        $v1, . + 4 + (-0x1D << 2)
    ctx->pc = 0x16A580u;
    {
        const bool branch_taken_0x16a580 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16A584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A580u;
        // 0x16a584: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a580) {
            ctx->pc = 0x16A510u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16a510;
        }
    }
    ctx->pc = 0x16A588u;
label_16a588:
    // 0x16a588: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x16a588u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16a58c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x16a58cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16a590: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x16a590u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16a594: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16a594u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16a598: 0x3e00008  jr          $ra
    ctx->pc = 0x16A598u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16A59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A598u;
        // 0x16a59c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16A598u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16A5A0u;
}
