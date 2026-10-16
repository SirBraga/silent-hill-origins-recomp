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

// Function: sub_00324F10
// Address: 0x324f10 - 0x325000
void sub_00324F10_0x324f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00324F10_0x324f10");
#endif

    switch (ctx->pc) {
        case 0x324f68u: goto label_324f68;
        case 0x324f90u: goto label_324f90;
        case 0x324facu: goto label_324fac;
        default: break;
    }

    ctx->pc = 0x324f10u;

    // 0x324f10: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x324f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x324f14: 0xffbe00a0  sd          $fp, 0xA0($sp)
    ctx->pc = 0x324f14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x324f18: 0xffb70090  sd          $s7, 0x90($sp)
    ctx->pc = 0x324f18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
    // 0x324f1c: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x324f1cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324f20: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x324f20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x324f24: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x324f24u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324f28: 0xffb50070  sd          $s5, 0x70($sp)
    ctx->pc = 0x324f28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x324f2c: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x324f2cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324f30: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x324f30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x324f34: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x324f34u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324f38: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x324f38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x324f3c: 0x140a02d  daddu       $s4, $t2, $zero
    ctx->pc = 0x324f3cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324f40: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x324f40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x324f44: 0x160982d  daddu       $s3, $t3, $zero
    ctx->pc = 0x324f44u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324f48: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x324f48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x324f4c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x324f4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324f50: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x324f50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x324f54: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x324f54u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x324f58: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x324f58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x324f5c: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x324f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x324f60: 0xafa50014  sw          $a1, 0x14($sp)
    ctx->pc = 0x324f60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 5));
    // 0x324f64: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x324f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_324f68:
    // 0x324f68: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x324f68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324f6c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x324f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x324f70: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x324f70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324f74: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x324f74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x324f78: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x324f78u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324f7c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x324f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x324f80: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x324f80u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324f84: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x324f84u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324f88: 0xc0c92ee  jal         func_324BB8
    ctx->pc = 0x324F88u;
    SET_GPR_U32(ctx, 31, 0x324F90u);
    ctx->pc = 0x324F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324F88u;
    // 0x324f8c: 0x260582d  daddu       $t3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324BB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x324BB8u, 0x324F88u, 0x324F90u)) {
        return;
    }
    ctx->pc = 0x324F90u;
label_324f90:
    // 0x324f90: 0x287c2  srl         $s0, $v0, 31
    ctx->pc = 0x324f90u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x324f94: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x324F94u;
    {
        const bool branch_taken_0x324f94 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x324F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324F94u;
        // 0x324f98: 0x8fa200c8  lw          $v0, 0xC8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324f94) {
            ctx->pc = 0x324FC8u;
            goto label_324fc8;
        }
    }
    ctx->pc = 0x324F9Cu;
    // 0x324f9c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x324F9Cu;
    {
        const bool branch_taken_0x324f9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x324FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324F9Cu;
        // 0x324fa0: 0x240203e8  addiu       $v0, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324f9c) {
            ctx->pc = 0x324FC8u;
            goto label_324fc8;
        }
    }
    ctx->pc = 0x324FA4u;
    // 0x324fa4: 0xc0c8858  jal         func_322160
    ctx->pc = 0x324FA4u;
    SET_GPR_U32(ctx, 31, 0x324FACu);
    ctx->pc = 0x324FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324FA4u;
    // 0x324fa8: 0x2222018  mult        $a0, $s1, $v0 (Delay Slot)
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x322160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x322160u, 0x324FA4u, 0x324FACu)) {
        return;
    }
    ctx->pc = 0x324FACu;
label_324fac:
    // 0x324fac: 0x2a23007f  slti        $v1, $s1, 0x7F
    ctx->pc = 0x324facu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)127) ? 1 : 0);
    // 0x324fb0: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x324FB0u;
    {
        const bool branch_taken_0x324fb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x324fb0) {
            ctx->pc = 0x324FB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x324FB0u;
            // 0x324fb4: 0x118840  sll         $s1, $s1, 1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x324FB8u;
            goto label_324fb8;
        }
    }
    ctx->pc = 0x324FB8u;
label_324fb8:
    // 0x324fb8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x324fb8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x324fbc: 0x2a420065  slti        $v0, $s2, 0x65
    ctx->pc = 0x324fbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)101) ? 1 : 0);
    // 0x324fc0: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x324FC0u;
    {
        const bool branch_taken_0x324fc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x324FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324FC0u;
        // 0x324fc4: 0x8fa200c0  lw          $v0, 0xC0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324fc0) {
            ctx->pc = 0x324F68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_324f68;
        }
    }
    ctx->pc = 0x324FC8u;
label_324fc8:
    // 0x324fc8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x324fc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324fcc: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x324fccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x324fd0: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x324fd0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x324fd4: 0xdfb70090  ld          $s7, 0x90($sp)
    ctx->pc = 0x324fd4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x324fd8: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x324fd8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x324fdc: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x324fdcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x324fe0: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x324fe0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x324fe4: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x324fe4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x324fe8: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x324fe8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x324fec: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x324fecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x324ff0: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x324ff0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x324ff4: 0x3e00008  jr          $ra
    ctx->pc = 0x324FF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x324FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324FF4u;
        // 0x324ff8: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x324FF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x324FFCu;
    // 0x324ffc: 0x0  nop
    ctx->pc = 0x324ffcu;
    // NOP
    ctx->pc = 0x325000u;
}
