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

// Function: sub_00119FB8
// Address: 0x119fb8 - 0x11a0e8
void sub_00119FB8_0x119fb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00119FB8_0x119fb8");
#endif

    switch (ctx->pc) {
        case 0x119fd4u: goto label_119fd4;
        case 0x119fe8u: goto label_119fe8;
        case 0x11a000u: goto label_11a000;
        case 0x11a040u: goto label_11a040;
        case 0x11a074u: goto label_11a074;
        case 0x11a0c4u: goto label_11a0c4;
        default: break;
    }

    ctx->pc = 0x119fb8u;

    // 0x119fb8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x119fb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x119fbc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x119fbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x119fc0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x119fc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x119fc4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x119fc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119fc8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x119fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x119fcc: 0xc04efda  jal         func_13BF68
    ctx->pc = 0x119FCCu;
    SET_GPR_U32(ctx, 31, 0x119FD4u);
    ctx->pc = 0x119FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119FCCu;
    // 0x119fd0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BF68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13BF68u, 0x119FCCu, 0x119FD4u)) {
        return;
    }
    ctx->pc = 0x119FD4u;
label_119fd4:
    // 0x119fd4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x119fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x119fd8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x119fd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119fdc: 0x8c464550  lw          $a2, 0x4550($v0)
    ctx->pc = 0x119fdcu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6B4550u));
    // 0x119fe0: 0xc07f1c0  jal         func_1FC700
    ctx->pc = 0x119FE0u;
    SET_GPR_U32(ctx, 31, 0x119FE8u);
    ctx->pc = 0x119FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119FE0u;
    // 0x119fe4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x119FE0u, 0x119FE8u)) {
        return;
    }
    ctx->pc = 0x119FE8u;
label_119fe8:
    // 0x119fe8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x119fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x119fec: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x119fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x119ff0: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x119FF0u;
    {
        const bool branch_taken_0x119ff0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x119FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119FF0u;
        // 0x119ff4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119ff0) {
            ctx->pc = 0x11A0D8u;
            goto label_11a0d8;
        }
    }
    ctx->pc = 0x119FF8u;
    // 0x119ff8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x119ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x119ffc: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x119ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_11a000:
    // 0x11a000: 0x2c830006  sltiu       $v1, $a0, 0x6
    ctx->pc = 0x11a000u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x11a004: 0x10600028  beqz        $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x11A004u;
    {
        const bool branch_taken_0x11a004 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A004u;
        // 0x11a008: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a004) {
            ctx->pc = 0x11A0A8u;
            goto label_11a0a8;
        }
    }
    ctx->pc = 0x11A00Cu;
    // 0x11a00c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x11a00cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x11a010: 0x2442afc0  addiu       $v0, $v0, -0x5040
    ctx->pc = 0x11a010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946752));
    // 0x11a014: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x11a014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11a018: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x11a018u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11a01c: 0x800008  jr          $a0
    ctx->pc = 0x11A01Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11A024u: goto label_11a024;
            case 0x11A048u: goto label_11a048;
            case 0x11A05Cu: goto label_11a05c;
            case 0x11A07Cu: goto label_11a07c;
            case 0x11A08Cu: goto label_11a08c;
            case 0x11A09Cu: goto label_11a09c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A01Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x11A024u;
label_11a024:
    // 0x11a024: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x11a024u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11a028: 0x3c070069  lui         $a3, 0x69
    ctx->pc = 0x11a028u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)105 << 16));
    // 0x11a02c: 0x24e7afa0  addiu       $a3, $a3, -0x5060
    ctx->pc = 0x11a02cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294946720));
    // 0x11a030: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x11a030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x11a034: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x11a034u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x11a038: 0xc07fcf4  jal         func_1FF3D0
    ctx->pc = 0x11A038u;
    SET_GPR_U32(ctx, 31, 0x11A040u);
    ctx->pc = 0x11A03Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A038u;
    // 0x11a03c: 0x26250044  addiu       $a1, $s1, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF3D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF3D0u, 0x11A038u, 0x11A040u)) {
        return;
    }
    ctx->pc = 0x11A040u;
label_11a040:
    // 0x11a040: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x11A040u;
    {
        const bool branch_taken_0x11a040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A040u;
        // 0x11a044: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a040) {
            ctx->pc = 0x11A0ACu;
            goto label_11a0ac;
        }
    }
    ctx->pc = 0x11A048u;
label_11a048:
    // 0x11a048: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x11a048u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11a04c: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x11a04cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x11a050: 0x24c6afb0  addiu       $a2, $a2, -0x5050
    ctx->pc = 0x11a050u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294946736));
    // 0x11a054: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x11A054u;
    {
        const bool branch_taken_0x11a054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A054u;
        // 0x11a058: 0x2624004c  addiu       $a0, $s1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a054) {
            ctx->pc = 0x11A06Cu;
            goto label_11a06c;
        }
    }
    ctx->pc = 0x11A05Cu;
label_11a05c:
    // 0x11a05c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x11a05cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11a060: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x11a060u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x11a064: 0x24c6afa0  addiu       $a2, $a2, -0x5060
    ctx->pc = 0x11a064u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294946720));
    // 0x11a068: 0x26240054  addiu       $a0, $s1, 0x54
    ctx->pc = 0x11a068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 84));
label_11a06c:
    // 0x11a06c: 0xc07fce0  jal         func_1FF380
    ctx->pc = 0x11A06Cu;
    SET_GPR_U32(ctx, 31, 0x11A074u);
    ctx->pc = 0x11A070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A06Cu;
    // 0x11a070: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF380u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF380u, 0x11A06Cu, 0x11A074u)) {
        return;
    }
    ctx->pc = 0x11A074u;
label_11a074:
    // 0x11a074: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x11A074u;
    {
        const bool branch_taken_0x11a074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A074u;
        // 0x11a078: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a074) {
            ctx->pc = 0x11A0ACu;
            goto label_11a0ac;
        }
    }
    ctx->pc = 0x11A07Cu;
label_11a07c:
    // 0x11a07c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x11a07cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11a080: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x11a080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11a084: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x11A084u;
    {
        const bool branch_taken_0x11a084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A084u;
        // 0x11a088: 0xe620005c  swc1        $f0, 0x5C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 92), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a084) {
            ctx->pc = 0x11A0A8u;
            goto label_11a0a8;
        }
    }
    ctx->pc = 0x11A08Cu;
label_11a08c:
    // 0x11a08c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x11a08cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11a090: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x11a090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11a094: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x11A094u;
    {
        const bool branch_taken_0x11a094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A094u;
        // 0x11a098: 0xe6200060  swc1        $f0, 0x60($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 96), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a094) {
            ctx->pc = 0x11A0A8u;
            goto label_11a0a8;
        }
    }
    ctx->pc = 0x11A09Cu;
label_11a09c:
    // 0x11a09c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x11a09cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11a0a0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x11a0a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11a0a4: 0xe6200064  swc1        $f0, 0x64($s1)
    ctx->pc = 0x11a0a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 100), bits); }
label_11a0a8:
    // 0x11a0a8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x11a0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_11a0ac:
    // 0x11a0ac: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x11a0acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a0b0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x11a0b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11a0b4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x11a0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11a0b8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x11a0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11a0bc: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x11A0BCu;
    SET_GPR_U32(ctx, 31, 0x11A0C4u);
    ctx->pc = 0x11A0C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A0BCu;
    // 0x11a0c0: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x11A0BCu, 0x11A0C4u)) {
        return;
    }
    ctx->pc = 0x11A0C4u;
label_11a0c4:
    // 0x11a0c4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x11a0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11a0c8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x11a0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11a0cc: 0x5460ffcc  bnel        $v1, $zero, . + 4 + (-0x34 << 2)
    ctx->pc = 0x11A0CCu;
    {
        const bool branch_taken_0x11a0cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x11a0cc) {
            ctx->pc = 0x11A0D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11A0CCu;
            // 0x11a0d0: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11A000u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11a000;
        }
    }
    ctx->pc = 0x11A0D4u;
    // 0x11a0d4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x11a0d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_11a0d8:
    // 0x11a0d8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x11a0d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11a0dc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11a0dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11a0e0: 0x3e00008  jr          $ra
    ctx->pc = 0x11A0E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11A0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A0E0u;
        // 0x11a0e4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A0E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11A0E8u;
}
