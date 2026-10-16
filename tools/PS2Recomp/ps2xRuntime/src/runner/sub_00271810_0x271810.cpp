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

// Function: sub_00271810
// Address: 0x271810 - 0x271968
void sub_00271810_0x271810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00271810_0x271810");
#endif

    ctx->pc = 0x271810u;

    // 0x271810: 0x44026000  mfc1        $v0, $f12
    ctx->pc = 0x271810u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x271814: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x271814u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271818: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x271818u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x27181c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x27181cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x271820: 0x3c0231ff  lui         $v0, 0x31FF
    ctx->pc = 0x271820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12799 << 16));
    // 0x271824: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x271824u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x271828: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x271828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x27182c: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x27182cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x271830: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x271830u;
    {
        const bool branch_taken_0x271830 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x271830) {
            ctx->pc = 0x271834u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x271830u;
            // 0x271834: 0x460c6182  mul.s       $f6, $f12, $f12 (Delay Slot)
            ctx->f[6] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x271860u;
            goto label_271860;
        }
    }
    ctx->pc = 0x271838u;
    // 0x271838: 0x46006024  .word       0x46006024                   # cvt.w.s     $f0, $f12 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x271838u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[12]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x27183c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x27183cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x271840: 0x0  nop
    ctx->pc = 0x271840u;
    // NOP
    // 0x271844: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x271844u;
    {
        const bool branch_taken_0x271844 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x271844) {
            ctx->pc = 0x271848u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x271844u;
            // 0x271848: 0x460c6182  mul.s       $f6, $f12, $f12 (Delay Slot)
            ctx->f[6] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x271860u;
            goto label_271860;
        }
    }
    ctx->pc = 0x27184Cu;
    // 0x27184c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x27184cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x271850: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x271850u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x271854: 0x3e00008  jr          $ra
    ctx->pc = 0x271854u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x271854u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27185Cu;
    // 0x27185c: 0x0  nop
    ctx->pc = 0x27185cu;
    // NOP
label_271860:
    // 0x271860: 0x3c01ad47  lui         $at, 0xAD47
    ctx->pc = 0x271860u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)44359 << 16));
    // 0x271864: 0x3421d74e  ori         $at, $at, 0xD74E
    ctx->pc = 0x271864u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55118);
    // 0x271868: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x271868u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27186c: 0x3c01310f  lui         $at, 0x310F
    ctx->pc = 0x27186cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12559 << 16));
    // 0x271870: 0x342174f6  ori         $at, $at, 0x74F6
    ctx->pc = 0x271870u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)29942);
    // 0x271874: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x271874u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x271878: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x271878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
    // 0x27187c: 0x3c01b493  lui         $at, 0xB493
    ctx->pc = 0x27187cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)46227 << 16));
    // 0x271880: 0x3421f27c  ori         $at, $at, 0xF27C
    ctx->pc = 0x271880u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62076);
    // 0x271884: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x271884u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x271888: 0x34429999  ori         $v0, $v0, 0x9999
    ctx->pc = 0x271888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39321);
    // 0x27188c: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x27188cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x271890: 0x3c0137d0  lui         $at, 0x37D0
    ctx->pc = 0x271890u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14288 << 16));
    // 0x271894: 0x34210d01  ori         $at, $at, 0xD01
    ctx->pc = 0x271894u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)3329);
    // 0x271898: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x271898u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27189c: 0x3c01bab6  lui         $at, 0xBAB6
    ctx->pc = 0x27189cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47798 << 16));
    // 0x2718a0: 0x34210b61  ori         $at, $at, 0xB61
    ctx->pc = 0x2718a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2913);
    // 0x2718a4: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x2718a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2718a8: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x2718a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2718ac: 0x3c013d2a  lui         $at, 0x3D2A
    ctx->pc = 0x2718acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15658 << 16));
    // 0x2718b0: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x2718b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x2718b4: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x2718b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x2718b8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2718b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2718bc: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x2718bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x2718c0: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2718c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2718c4: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x2718c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x2718c8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2718c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2718cc: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x2718ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x2718d0: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x2718d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x2718d4: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x2718d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x2718d8: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x2718d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x2718dc: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2718DCu;
    {
        const bool branch_taken_0x2718dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2718E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2718DCu;
        // 0x2718e0: 0x46003042  mul.s       $f1, $f6, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2718dc) {
            ctx->pc = 0x271910u;
            goto label_271910;
        }
    }
    ctx->pc = 0x2718E4u;
    // 0x2718e4: 0x46013042  mul.s       $f1, $f6, $f1
    ctx->pc = 0x2718e4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x2718e8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2718e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2718ec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2718ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2718f0: 0x460d6082  mul.s       $f2, $f12, $f13
    ctx->pc = 0x2718f0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[12], ctx->f[13]);
    // 0x2718f4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2718f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2718f8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2718f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2718fc: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x2718fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x271900: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x271900u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x271904: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x271904u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x271908: 0x3e00008  jr          $ra
    ctx->pc = 0x271908u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27190Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271908u;
        // 0x27190c: 0x46001801  sub.s       $f0, $f3, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x271908u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x271910u;
label_271910:
    // 0x271910: 0x3c023f48  lui         $v0, 0x3F48
    ctx->pc = 0x271910u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16200 << 16));
    // 0x271914: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x271914u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x271918: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x271918u;
    {
        const bool branch_taken_0x271918 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27191Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271918u;
        // 0x27191c: 0x3c02ff00  lui         $v0, 0xFF00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271918) {
            ctx->pc = 0x27192Cu;
            goto label_27192c;
        }
    }
    ctx->pc = 0x271920u;
    // 0x271920: 0x3c023e90  lui         $v0, 0x3E90
    ctx->pc = 0x271920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16016 << 16));
    // 0x271924: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x271924u;
    {
        const bool branch_taken_0x271924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x271924) {
            ctx->pc = 0x271930u;
            goto label_271930;
        }
    }
    ctx->pc = 0x27192Cu;
label_27192c:
    // 0x27192c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x27192cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_271930:
    // 0x271930: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x271930u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x271934: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x271934u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x271938: 0x46013082  mul.s       $f2, $f6, $f1
    ctx->pc = 0x271938u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x27193c: 0x460d60c2  mul.s       $f3, $f12, $f13
    ctx->pc = 0x27193cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[12], ctx->f[13]);
    // 0x271940: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x271940u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x271944: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x271944u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x271948: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x271948u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x27194c: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x27194cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x271950: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x271950u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x271954: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x271954u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x271958: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x271958u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x27195c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x27195cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x271960: 0x3e00008  jr          $ra
    ctx->pc = 0x271960u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x271964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271960u;
        // 0x271964: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x271960u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x271968u;
}
