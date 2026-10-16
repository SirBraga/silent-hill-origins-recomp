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

// Function: sub_0024E820
// Address: 0x24e820 - 0x24e940
void sub_0024E820_0x24e820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024E820_0x24e820");
#endif

    switch (ctx->pc) {
        case 0x24e830u: goto label_24e830;
        case 0x24e8c0u: goto label_24e8c0;
        default: break;
    }

    ctx->pc = 0x24e820u;

    // 0x24e820: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x24e820u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x24e824: 0x4c00024  bltz        $a2, . + 4 + (0x24 << 2)
    ctx->pc = 0x24E824u;
    {
        const bool branch_taken_0x24e824 = (GPR_S64(ctx, 6) < 0);
        ctx->pc = 0x24E828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E824u;
        // 0x24e828: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e824) {
            ctx->pc = 0x24E8B8u;
            goto label_24e8b8;
        }
    }
    ctx->pc = 0x24E82Cu;
    // 0x24e82c: 0x0  nop
    ctx->pc = 0x24e82cu;
    // NOP
label_24e830:
    // 0x24e830: 0xc4a70000  lwc1        $f7, 0x0($a1)
    ctx->pc = 0x24e830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x24e834: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x24e834u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x24e838: 0xc4e40000  lwc1        $f4, 0x0($a3)
    ctx->pc = 0x24e838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x24e83c: 0xc4e50004  lwc1        $f5, 0x4($a3)
    ctx->pc = 0x24e83cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x24e840: 0xc4e60008  lwc1        $f6, 0x8($a3)
    ctx->pc = 0x24e840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x24e844: 0x46043902  mul.s       $f4, $f7, $f4
    ctx->pc = 0x24e844u;
    ctx->f[4] = FPU_MUL_S(ctx->f[7], ctx->f[4]);
    // 0x24e848: 0x46053942  mul.s       $f5, $f7, $f5
    ctx->pc = 0x24e848u;
    ctx->f[5] = FPU_MUL_S(ctx->f[7], ctx->f[5]);
    // 0x24e84c: 0xc4e20010  lwc1        $f2, 0x10($a3)
    ctx->pc = 0x24e84cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24e850: 0x46063982  mul.s       $f6, $f7, $f6
    ctx->pc = 0x24e850u;
    ctx->f[6] = FPU_MUL_S(ctx->f[7], ctx->f[6]);
    // 0x24e854: 0xc4e30014  lwc1        $f3, 0x14($a3)
    ctx->pc = 0x24e854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24e858: 0xc4a70004  lwc1        $f7, 0x4($a1)
    ctx->pc = 0x24e858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x24e85c: 0xc4e00018  lwc1        $f0, 0x18($a3)
    ctx->pc = 0x24e85cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24e860: 0x46023882  mul.s       $f2, $f7, $f2
    ctx->pc = 0x24e860u;
    ctx->f[2] = FPU_MUL_S(ctx->f[7], ctx->f[2]);
    // 0x24e864: 0xc4e10020  lwc1        $f1, 0x20($a3)
    ctx->pc = 0x24e864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24e868: 0x46003802  mul.s       $f0, $f7, $f0
    ctx->pc = 0x24e868u;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x24e86c: 0x460338c2  mul.s       $f3, $f7, $f3
    ctx->pc = 0x24e86cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[7], ctx->f[3]);
    // 0x24e870: 0xc4a70008  lwc1        $f7, 0x8($a1)
    ctx->pc = 0x24e870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x24e874: 0x46022100  add.s       $f4, $f4, $f2
    ctx->pc = 0x24e874u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
    // 0x24e878: 0x46003180  add.s       $f6, $f6, $f0
    ctx->pc = 0x24e878u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
    // 0x24e87c: 0x24a5000c  addiu       $a1, $a1, 0xC
    ctx->pc = 0x24e87cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x24e880: 0x46013842  mul.s       $f1, $f7, $f1
    ctx->pc = 0x24e880u;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
    // 0x24e884: 0x46032940  add.s       $f5, $f5, $f3
    ctx->pc = 0x24e884u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[3]);
    // 0x24e888: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x24e888u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x24e88c: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x24e88cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x24e890: 0xc4e00024  lwc1        $f0, 0x24($a3)
    ctx->pc = 0x24e890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24e894: 0x46003802  mul.s       $f0, $f7, $f0
    ctx->pc = 0x24e894u;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x24e898: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x24e898u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x24e89c: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x24e89cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x24e8a0: 0xc4e10028  lwc1        $f1, 0x28($a3)
    ctx->pc = 0x24e8a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24e8a4: 0x46013842  mul.s       $f1, $f7, $f1
    ctx->pc = 0x24e8a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
    // 0x24e8a8: 0x46060840  add.s       $f1, $f1, $f6
    ctx->pc = 0x24e8a8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
    // 0x24e8ac: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x24e8acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x24e8b0: 0x4c1ffdf  bgez        $a2, . + 4 + (-0x21 << 2)
    ctx->pc = 0x24E8B0u;
    {
        const bool branch_taken_0x24e8b0 = (GPR_S64(ctx, 6) >= 0);
        ctx->pc = 0x24E8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E8B0u;
        // 0x24e8b4: 0x2484000c  addiu       $a0, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e8b0) {
            ctx->pc = 0x24E830u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24e830;
        }
    }
    ctx->pc = 0x24E8B8u;
label_24e8b8:
    // 0x24e8b8: 0x3e00008  jr          $ra
    ctx->pc = 0x24E8B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24E8B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24E8C0u;
label_24e8c0:
    // 0x24e8c0: 0xc4a70000  lwc1        $f7, 0x0($a1)
    ctx->pc = 0x24e8c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x24e8c4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x24e8c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e8c8: 0xc4c40000  lwc1        $f4, 0x0($a2)
    ctx->pc = 0x24e8c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x24e8cc: 0xc4c50004  lwc1        $f5, 0x4($a2)
    ctx->pc = 0x24e8ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x24e8d0: 0xc4c60008  lwc1        $f6, 0x8($a2)
    ctx->pc = 0x24e8d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x24e8d4: 0x46043902  mul.s       $f4, $f7, $f4
    ctx->pc = 0x24e8d4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[7], ctx->f[4]);
    // 0x24e8d8: 0x46053942  mul.s       $f5, $f7, $f5
    ctx->pc = 0x24e8d8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[7], ctx->f[5]);
    // 0x24e8dc: 0xc4c20010  lwc1        $f2, 0x10($a2)
    ctx->pc = 0x24e8dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24e8e0: 0x46063982  mul.s       $f6, $f7, $f6
    ctx->pc = 0x24e8e0u;
    ctx->f[6] = FPU_MUL_S(ctx->f[7], ctx->f[6]);
    // 0x24e8e4: 0xc4c30014  lwc1        $f3, 0x14($a2)
    ctx->pc = 0x24e8e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24e8e8: 0xc4a70004  lwc1        $f7, 0x4($a1)
    ctx->pc = 0x24e8e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x24e8ec: 0xc4c00018  lwc1        $f0, 0x18($a2)
    ctx->pc = 0x24e8ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24e8f0: 0x46023882  mul.s       $f2, $f7, $f2
    ctx->pc = 0x24e8f0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[7], ctx->f[2]);
    // 0x24e8f4: 0xc4c10020  lwc1        $f1, 0x20($a2)
    ctx->pc = 0x24e8f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24e8f8: 0x46003802  mul.s       $f0, $f7, $f0
    ctx->pc = 0x24e8f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x24e8fc: 0x460338c2  mul.s       $f3, $f7, $f3
    ctx->pc = 0x24e8fcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[7], ctx->f[3]);
    // 0x24e900: 0xc4a70008  lwc1        $f7, 0x8($a1)
    ctx->pc = 0x24e900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x24e904: 0x46022100  add.s       $f4, $f4, $f2
    ctx->pc = 0x24e904u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
    // 0x24e908: 0x46003180  add.s       $f6, $f6, $f0
    ctx->pc = 0x24e908u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
    // 0x24e90c: 0x46013842  mul.s       $f1, $f7, $f1
    ctx->pc = 0x24e90cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
    // 0x24e910: 0x46032940  add.s       $f5, $f5, $f3
    ctx->pc = 0x24e910u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[3]);
    // 0x24e914: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x24e914u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x24e918: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x24e918u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x24e91c: 0xc4c00024  lwc1        $f0, 0x24($a2)
    ctx->pc = 0x24e91cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24e920: 0x46003802  mul.s       $f0, $f7, $f0
    ctx->pc = 0x24e920u;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x24e924: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x24e924u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x24e928: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x24e928u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x24e92c: 0xc4c10028  lwc1        $f1, 0x28($a2)
    ctx->pc = 0x24e92cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24e930: 0x46013842  mul.s       $f1, $f7, $f1
    ctx->pc = 0x24e930u;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
    // 0x24e934: 0x46060840  add.s       $f1, $f1, $f6
    ctx->pc = 0x24e934u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
    // 0x24e938: 0x3e00008  jr          $ra
    ctx->pc = 0x24E938u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24E93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E938u;
        // 0x24e93c: 0xe4810008  swc1        $f1, 0x8($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24E938u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24E940u;
}
