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

// Function: sub_00254F40
// Address: 0x254f40 - 0x255028
void sub_00254F40_0x254f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00254F40_0x254f40");
#endif

    switch (ctx->pc) {
        case 0x254f84u: goto label_254f84;
        case 0x254fc8u: goto label_254fc8;
        case 0x255000u: goto label_255000;
        default: break;
    }

    ctx->pc = 0x254f40u;

    // 0x254f40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x254f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x254f44: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x254f44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x254f48: 0xac253fa8  sw          $a1, 0x3FA8($at)
    ctx->pc = 0x254f48u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x6B3FA8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3FA8u, _value); } while (0);
    // 0x254f4c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x254f4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x254f50: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x254f50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x254f54: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x254f54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254f58: 0x3c080070  lui         $t0, 0x70
    ctx->pc = 0x254f58u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)112 << 16));
    // 0x254f5c: 0x8c4411e0  lw          $a0, 0x11E0($v0)
    ctx->pc = 0x254f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5C11E0u));
    // 0x254f60: 0x3c090004  lui         $t1, 0x4
    ctx->pc = 0x254f60u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4 << 16));
    // 0x254f64: 0x8f8585c4  lw          $a1, -0x7A3C($gp)
    ctx->pc = 0x254f64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936004)));
    // 0x254f68: 0x25084298  addiu       $t0, $t0, 0x4298
    ctx->pc = 0x254f68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 17048));
    // 0x254f6c: 0x8f8785c8  lw          $a3, -0x7A38($gp)
    ctx->pc = 0x254f6cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936008)));
    // 0x254f70: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x254f70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x254f74: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x254f74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x254f78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x254f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x254f7c: 0xc0930ce  jal         func_24C338
    ctx->pc = 0x254F7Cu;
    SET_GPR_U32(ctx, 31, 0x254F84u);
    ctx->pc = 0x254F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254F7Cu;
    // 0x254f80: 0x35290010  ori         $t1, $t1, 0x10 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)16);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C338u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24C338u, 0x254F7Cu, 0x254F84u)) {
        return;
    }
    ctx->pc = 0x254F84u;
label_254f84:
    // 0x254f84: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x254f84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x254f88: 0x8c843fa8  lw          $a0, 0x3FA8($a0)
    ctx->pc = 0x254f88u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B3FA8u));
    // 0x254f8c: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x254f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x254f90: 0x24700fc8  addiu       $s0, $v1, 0xFC8
    ctx->pc = 0x254f90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4040));
    // 0x254f94: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x254f94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x254f98: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x254F98u;
    {
        const bool branch_taken_0x254f98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x254F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254F98u;
        // 0x254f9c: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254f98) {
            ctx->pc = 0x255010u;
            goto label_255010;
        }
    }
    ctx->pc = 0x254FA0u;
    // 0x254fa0: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x254fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x254fa4: 0x3c080070  lui         $t0, 0x70
    ctx->pc = 0x254fa4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)112 << 16));
    // 0x254fa8: 0x8c4411f8  lw          $a0, 0x11F8($v0)
    ctx->pc = 0x254fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5C11F8u));
    // 0x254fac: 0x3c090004  lui         $t1, 0x4
    ctx->pc = 0x254facu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4 << 16));
    // 0x254fb0: 0x8f8585cc  lw          $a1, -0x7A34($gp)
    ctx->pc = 0x254fb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936012)));
    // 0x254fb4: 0x250842c0  addiu       $t0, $t0, 0x42C0
    ctx->pc = 0x254fb4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 17088));
    // 0x254fb8: 0x8f8785d0  lw          $a3, -0x7A30($gp)
    ctx->pc = 0x254fb8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936016)));
    // 0x254fbc: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x254fbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x254fc0: 0xc0930ce  jal         func_24C338
    ctx->pc = 0x254FC0u;
    SET_GPR_U32(ctx, 31, 0x254FC8u);
    ctx->pc = 0x254FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254FC0u;
    // 0x254fc4: 0x35290014  ori         $t1, $t1, 0x14 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)20);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C338u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24C338u, 0x254FC0u, 0x254FC8u)) {
        return;
    }
    ctx->pc = 0x254FC8u;
label_254fc8:
    // 0x254fc8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x254fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x254fcc: 0x8c633fa8  lw          $v1, 0x3FA8($v1)
    ctx->pc = 0x254fccu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B3FA8u));
    // 0x254fd0: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x254fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x254fd4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x254FD4u;
    {
        const bool branch_taken_0x254fd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x254FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254FD4u;
        // 0x254fd8: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254fd4) {
            ctx->pc = 0x254FF8u;
            goto label_254ff8;
        }
    }
    ctx->pc = 0x254FDCu;
    // 0x254fdc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x254fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x254fe0: 0x8c633fac  lw          $v1, 0x3FAC($v1)
    ctx->pc = 0x254fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B3FACu));
    // 0x254fe4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x254fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x254fe8: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x254fe8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x254fec: 0xac233fac  sw          $v1, 0x3FAC($at)
    ctx->pc = 0x254fecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B3FACu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3FACu, _value); } while (0);
    // 0x254ff0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x254FF0u;
    {
        const bool branch_taken_0x254ff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254FF0u;
        // 0x254ff4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254ff0) {
            ctx->pc = 0x255014u;
            goto label_255014;
        }
    }
    ctx->pc = 0x254FF8u;
label_254ff8:
    // 0x254ff8: 0xc093106  jal         func_24C418
    ctx->pc = 0x254FF8u;
    SET_GPR_U32(ctx, 31, 0x255000u);
    ctx->pc = 0x254FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254FF8u;
    // 0x254ffc: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C418u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24C418u, 0x254FF8u, 0x255000u)) {
        return;
    }
    ctx->pc = 0x255000u;
label_255000:
    // 0x255000: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x255000u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x255004: 0x8c633fa8  lw          $v1, 0x3FA8($v1)
    ctx->pc = 0x255004u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B3FA8u));
    // 0x255008: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x255008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x25500c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x25500cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_255010:
    // 0x255010: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x255010u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_255014:
    // 0x255014: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x255014u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x255018: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x255018u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25501c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25501cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x255020: 0x3e00008  jr          $ra
    ctx->pc = 0x255020u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x255024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255020u;
        // 0x255024: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x255020u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x255028u;
}
