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

// Function: sub_00155830
// Address: 0x155830 - 0x155960
void sub_00155830_0x155830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00155830_0x155830");
#endif

    switch (ctx->pc) {
        case 0x15584cu: goto label_15584c;
        case 0x155860u: goto label_155860;
        case 0x155878u: goto label_155878;
        case 0x1558a8u: goto label_1558a8;
        case 0x1558c0u: goto label_1558c0;
        case 0x1558e8u: goto label_1558e8;
        case 0x155900u: goto label_155900;
        case 0x155938u: goto label_155938;
        default: break;
    }

    ctx->pc = 0x155830u;

    // 0x155830: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x155830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x155834: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x155834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x155838: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x155838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x15583c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x15583cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155840: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x155840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x155844: 0xc04efda  jal         func_13BF68
    ctx->pc = 0x155844u;
    SET_GPR_U32(ctx, 31, 0x15584Cu);
    ctx->pc = 0x155848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155844u;
    // 0x155848: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BF68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13BF68u, 0x155844u, 0x15584Cu)) {
        return;
    }
    ctx->pc = 0x15584Cu;
label_15584c:
    // 0x15584c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x15584cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x155850: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x155850u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155854: 0x8c46f058  lw          $a2, -0xFA8($v0)
    ctx->pc = 0x155854u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6BF058u));
    // 0x155858: 0xc07f1c0  jal         func_1FC700
    ctx->pc = 0x155858u;
    SET_GPR_U32(ctx, 31, 0x155860u);
    ctx->pc = 0x15585Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155858u;
    // 0x15585c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x155858u, 0x155860u)) {
        return;
    }
    ctx->pc = 0x155860u;
label_155860:
    // 0x155860: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x155860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x155864: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x155864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x155868: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x155868u;
    {
        const bool branch_taken_0x155868 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15586Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155868u;
        // 0x15586c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155868) {
            ctx->pc = 0x15594Cu;
            goto label_15594c;
        }
    }
    ctx->pc = 0x155870u;
    // 0x155870: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x155870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x155874: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x155874u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_155878:
    // 0x155878: 0x2c830005  sltiu       $v1, $a0, 0x5
    ctx->pc = 0x155878u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x15587c: 0x10600027  beqz        $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x15587Cu;
    {
        const bool branch_taken_0x15587c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x155880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15587Cu;
        // 0x155880: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15587c) {
            ctx->pc = 0x15591Cu;
            goto label_15591c;
        }
    }
    ctx->pc = 0x155884u;
    // 0x155884: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x155884u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x155888: 0x24422940  addiu       $v0, $v0, 0x2940
    ctx->pc = 0x155888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10560));
    // 0x15588c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x15588cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x155890: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x155890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x155894: 0x800008  jr          $a0
    ctx->pc = 0x155894u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15589Cu: goto label_15589c;
            case 0x1558B4u: goto label_1558b4;
            case 0x1558CCu: goto label_1558cc;
            case 0x1558DCu: goto label_1558dc;
            case 0x1558F4u: goto label_1558f4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x155894u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x15589Cu;
label_15589c:
    // 0x15589c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x15589cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1558a0: 0xc06d134  jal         func_1B44D0
    ctx->pc = 0x1558A0u;
    SET_GPR_U32(ctx, 31, 0x1558A8u);
    ctx->pc = 0x1558A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1558A0u;
    // 0x1558a4: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B44D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B44D0u, 0x1558A0u, 0x1558A8u)) {
        return;
    }
    ctx->pc = 0x1558A8u;
label_1558a8:
    // 0x1558a8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1558a8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1558ac: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1558ACu;
    {
        const bool branch_taken_0x1558ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1558B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1558ACu;
        // 0x1558b0: 0xae2300f8  sw          $v1, 0xF8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 248), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1558ac) {
            ctx->pc = 0x155908u;
            goto label_155908;
        }
    }
    ctx->pc = 0x1558B4u;
label_1558b4:
    // 0x1558b4: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1558b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1558b8: 0xc06d134  jal         func_1B44D0
    ctx->pc = 0x1558B8u;
    SET_GPR_U32(ctx, 31, 0x1558C0u);
    ctx->pc = 0x1558BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1558B8u;
    // 0x1558bc: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B44D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B44D0u, 0x1558B8u, 0x1558C0u)) {
        return;
    }
    ctx->pc = 0x1558C0u;
label_1558c0:
    // 0x1558c0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1558c0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1558c4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1558C4u;
    {
        const bool branch_taken_0x1558c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1558C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1558C4u;
        // 0x1558c8: 0xae2300fc  sw          $v1, 0xFC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 252), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1558c4) {
            ctx->pc = 0x155908u;
            goto label_155908;
        }
    }
    ctx->pc = 0x1558CCu;
label_1558cc:
    // 0x1558cc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1558ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1558d0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1558d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1558d4: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1558D4u;
    {
        const bool branch_taken_0x1558d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1558D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1558D4u;
        // 0x1558d8: 0xe62000b0  swc1        $f0, 0xB0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 176), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1558d4) {
            ctx->pc = 0x15591Cu;
            goto label_15591c;
        }
    }
    ctx->pc = 0x1558DCu;
label_1558dc:
    // 0x1558dc: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1558dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1558e0: 0xc06d134  jal         func_1B44D0
    ctx->pc = 0x1558E0u;
    SET_GPR_U32(ctx, 31, 0x1558E8u);
    ctx->pc = 0x1558E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1558E0u;
    // 0x1558e4: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B44D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B44D0u, 0x1558E0u, 0x1558E8u)) {
        return;
    }
    ctx->pc = 0x1558E8u;
label_1558e8:
    // 0x1558e8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1558e8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1558ec: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1558ECu;
    {
        const bool branch_taken_0x1558ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1558F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1558ECu;
        // 0x1558f0: 0xae230100  sw          $v1, 0x100($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 256), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1558ec) {
            ctx->pc = 0x155908u;
            goto label_155908;
        }
    }
    ctx->pc = 0x1558F4u;
label_1558f4:
    // 0x1558f4: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1558f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1558f8: 0xc06d134  jal         func_1B44D0
    ctx->pc = 0x1558F8u;
    SET_GPR_U32(ctx, 31, 0x155900u);
    ctx->pc = 0x1558FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1558F8u;
    // 0x1558fc: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B44D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B44D0u, 0x1558F8u, 0x155900u)) {
        return;
    }
    ctx->pc = 0x155900u;
label_155900:
    // 0x155900: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x155900u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155904: 0xae230104  sw          $v1, 0x104($s1)
    ctx->pc = 0x155904u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 260), GPR_U32(ctx, 3));
label_155908:
    // 0x155908: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x155908u;
    {
        const bool branch_taken_0x155908 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x155908) {
            ctx->pc = 0x15590Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x155908u;
            // 0x15590c: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x155920u;
            goto label_155920;
        }
    }
    ctx->pc = 0x155910u;
    // 0x155910: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x155910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x155914: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x155914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x155918: 0xac620054  sw          $v0, 0x54($v1)
    ctx->pc = 0x155918u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 2));
label_15591c:
    // 0x15591c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x15591cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_155920:
    // 0x155920: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x155920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155924: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x155924u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x155928: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x155928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15592c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x15592cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x155930: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x155930u;
    SET_GPR_U32(ctx, 31, 0x155938u);
    ctx->pc = 0x155934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155930u;
    // 0x155934: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x155930u, 0x155938u)) {
        return;
    }
    ctx->pc = 0x155938u;
label_155938:
    // 0x155938: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x155938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15593c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x15593cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x155940: 0x5460ffcd  bnel        $v1, $zero, . + 4 + (-0x33 << 2)
    ctx->pc = 0x155940u;
    {
        const bool branch_taken_0x155940 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x155940) {
            ctx->pc = 0x155944u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x155940u;
            // 0x155944: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x155878u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_155878;
        }
    }
    ctx->pc = 0x155948u;
    // 0x155948: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x155948u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_15594c:
    // 0x15594c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x15594cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x155950: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x155950u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x155954: 0x3e00008  jr          $ra
    ctx->pc = 0x155954u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x155958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155954u;
        // 0x155958: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x155954u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15595Cu;
    // 0x15595c: 0x0  nop
    ctx->pc = 0x15595cu;
    // NOP
    ctx->pc = 0x155960u;
}
