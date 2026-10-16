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

// Function: sub_002E43F8
// Address: 0x2e43f8 - 0x2e44d8
void sub_002E43F8_0x2e43f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E43F8_0x2e43f8");
#endif

    switch (ctx->pc) {
        case 0x2e4440u: goto label_2e4440;
        case 0x2e4450u: goto label_2e4450;
        case 0x2e4470u: goto label_2e4470;
        case 0x2e4480u: goto label_2e4480;
        case 0x2e44a4u: goto label_2e44a4;
        default: break;
    }

    ctx->pc = 0x2e43f8u;

    // 0x2e43f8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2e43f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2e43fc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2e43fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2e4400: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2e4400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2e4404: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2e4404u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4408: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2e4408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2e440c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x2e440cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x2e4410: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e4410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e4414: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2e4414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2e4418: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2e4418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x2e441c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E441Cu;
    {
        const bool branch_taken_0x2e441c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e441c) {
            ctx->pc = 0x2E4420u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E441Cu;
            // 0x2e4420: 0x8e22004c  lw          $v0, 0x4C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E442Cu;
            goto label_2e442c;
        }
    }
    ctx->pc = 0x2E4424u;
    // 0x2e4424: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x2E4424u;
    {
        const bool branch_taken_0x2e4424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4424u;
        // 0x2e4428: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4424) {
            ctx->pc = 0x2E44B8u;
            goto label_2e44b8;
        }
    }
    ctx->pc = 0x2E442Cu;
label_2e442c:
    // 0x2e442c: 0x9450000c  lhu         $s0, 0xC($v0)
    ctx->pc = 0x2e442cu;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2e4430: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2E4430u;
    {
        const bool branch_taken_0x2e4430 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4430u;
        // 0x2e4434: 0x8c520010  lw          $s2, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4430) {
            ctx->pc = 0x2E4458u;
            goto label_2e4458;
        }
    }
    ctx->pc = 0x2E4438u;
    // 0x2e4438: 0x24130018  addiu       $s3, $zero, 0x18
    ctx->pc = 0x2e4438u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2e443c: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x2e443cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_2e4440:
    // 0x2e4440: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x2e4440u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2e4444: 0x2131018  mult        $v0, $s0, $s3
    ctx->pc = 0x2e4444u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2e4448: 0xc0b7d76  jal         func_2DF5D8
    ctx->pc = 0x2E4448u;
    SET_GPR_U32(ctx, 31, 0x2E4450u);
    ctx->pc = 0x2E444Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4448u;
    // 0x2e444c: 0x522021  addu        $a0, $v0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF5D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DF5D8u, 0x2E4448u, 0x2E4450u)) {
        return;
    }
    ctx->pc = 0x2E4450u;
label_2e4450:
    // 0x2e4450: 0x1600fffb  bnez        $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2E4450u;
    {
        const bool branch_taken_0x2e4450 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E4454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4450u;
        // 0x2e4454: 0x2602ffff  addiu       $v0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4450) {
            ctx->pc = 0x2E4440u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e4440;
        }
    }
    ctx->pc = 0x2E4458u;
label_2e4458:
    // 0x2e4458: 0x8e22004c  lw          $v0, 0x4C($s1)
    ctx->pc = 0x2e4458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x2e445c: 0x9450000e  lhu         $s0, 0xE($v0)
    ctx->pc = 0x2e445cu;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x2e4460: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2E4460u;
    {
        const bool branch_taken_0x2e4460 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4460u;
        // 0x2e4464: 0x8c520014  lw          $s2, 0x14($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4460) {
            ctx->pc = 0x2E4488u;
            goto label_2e4488;
        }
    }
    ctx->pc = 0x2E4468u;
    // 0x2e4468: 0x24130018  addiu       $s3, $zero, 0x18
    ctx->pc = 0x2e4468u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2e446c: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x2e446cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_2e4470:
    // 0x2e4470: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x2e4470u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2e4474: 0x2131018  mult        $v0, $s0, $s3
    ctx->pc = 0x2e4474u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2e4478: 0xc0b7d76  jal         func_2DF5D8
    ctx->pc = 0x2E4478u;
    SET_GPR_U32(ctx, 31, 0x2E4480u);
    ctx->pc = 0x2E447Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4478u;
    // 0x2e447c: 0x522021  addu        $a0, $v0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF5D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DF5D8u, 0x2E4478u, 0x2E4480u)) {
        return;
    }
    ctx->pc = 0x2E4480u;
label_2e4480:
    // 0x2e4480: 0x1600fffb  bnez        $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2E4480u;
    {
        const bool branch_taken_0x2e4480 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E4484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4480u;
        // 0x2e4484: 0x2602ffff  addiu       $v0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4480) {
            ctx->pc = 0x2E4470u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e4470;
        }
    }
    ctx->pc = 0x2E4488u;
label_2e4488:
    // 0x2e4488: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2e4488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2e448c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2e448cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2e4490: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E4490u;
    {
        const bool branch_taken_0x2e4490 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e4490) {
            ctx->pc = 0x2E4494u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E4490u;
            // 0x2e4494: 0x8e24004c  lw          $a0, 0x4C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E44A8u;
            goto label_2e44a8;
        }
    }
    ctx->pc = 0x2E4498u;
    // 0x2e4498: 0x8e22004c  lw          $v0, 0x4C($s1)
    ctx->pc = 0x2e4498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x2e449c: 0xc0b7080  jal         func_2DC200
    ctx->pc = 0x2E449Cu;
    SET_GPR_U32(ctx, 31, 0x2E44A4u);
    ctx->pc = 0x2E44A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E449Cu;
    // 0x2e44a0: 0x8c440010  lw          $a0, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC200u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DC200u, 0x2E449Cu, 0x2E44A4u)) {
        return;
    }
    ctx->pc = 0x2E44A4u;
label_2e44a4:
    // 0x2e44a4: 0x8e24004c  lw          $a0, 0x4C($s1)
    ctx->pc = 0x2e44a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
label_2e44a8:
    // 0x2e44a8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2e44a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e44ac: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x2e44acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x2e44b0: 0x8e23004c  lw          $v1, 0x4C($s1)
    ctx->pc = 0x2e44b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x2e44b4: 0xac600014  sw          $zero, 0x14($v1)
    ctx->pc = 0x2e44b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
label_2e44b8:
    // 0x2e44b8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2e44b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e44bc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2e44bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e44c0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e44c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e44c4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x2e44c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e44c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e44c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e44cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2E44CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E44D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E44CCu;
        // 0x2e44d0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E44CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E44D4u;
    // 0x2e44d4: 0x0  nop
    ctx->pc = 0x2e44d4u;
    // NOP
    ctx->pc = 0x2e44d8u;
}
