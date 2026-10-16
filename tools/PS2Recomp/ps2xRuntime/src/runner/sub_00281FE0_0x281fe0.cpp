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

// Function: sub_00281FE0
// Address: 0x281fe0 - 0x282068
void sub_00281FE0_0x281fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00281FE0_0x281fe0");
#endif

    switch (ctx->pc) {
        case 0x281fe0u: goto label_281fe0;
        case 0x281fe4u: goto label_281fe4;
        case 0x281fe8u: goto label_281fe8;
        case 0x281fecu: goto label_281fec;
        case 0x281ff0u: goto label_281ff0;
        case 0x281ff4u: goto label_281ff4;
        case 0x281ff8u: goto label_281ff8;
        case 0x281ffcu: goto label_281ffc;
        case 0x282000u: goto label_282000;
        case 0x282004u: goto label_282004;
        case 0x282008u: goto label_282008;
        case 0x28200cu: goto label_28200c;
        case 0x282010u: goto label_282010;
        case 0x282014u: goto label_282014;
        case 0x282018u: goto label_282018;
        case 0x28201cu: goto label_28201c;
        case 0x282020u: goto label_282020;
        case 0x282024u: goto label_282024;
        case 0x282028u: goto label_282028;
        case 0x28202cu: goto label_28202c;
        case 0x282030u: goto label_282030;
        case 0x282034u: goto label_282034;
        case 0x282038u: goto label_282038;
        case 0x28203cu: goto label_28203c;
        case 0x282040u: goto label_282040;
        case 0x282044u: goto label_282044;
        case 0x282048u: goto label_282048;
        case 0x28204cu: goto label_28204c;
        case 0x282050u: goto label_282050;
        case 0x282054u: goto label_282054;
        case 0x282058u: goto label_282058;
        case 0x28205cu: goto label_28205c;
        case 0x282060u: goto label_282060;
        case 0x282064u: goto label_282064;
        default: break;
    }

    ctx->pc = 0x281fe0u;

label_281fe0:
    // 0x281fe0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x281fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_281fe4:
    // 0x281fe4: 0x3c050004  lui         $a1, 0x4
    ctx->pc = 0x281fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
label_281fe8:
    // 0x281fe8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x281fe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_281fec:
    // 0x281fec: 0x34a5010c  ori         $a1, $a1, 0x10C
    ctx->pc = 0x281fecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)268);
label_281ff0:
    // 0x281ff0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x281ff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_281ff4:
    // 0x281ff4: 0x3c100073  lui         $s0, 0x73
    ctx->pc = 0x281ff4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)115 << 16));
label_281ff8:
    // 0x281ff8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x281ff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_281ffc:
    // 0x281ffc: 0x26100fc8  addiu       $s0, $s0, 0xFC8
    ctx->pc = 0x281ffcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4040));
label_282000:
    // 0x282000: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x282000u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_282004:
    // 0x282004: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x282004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_282008:
    // 0x282008: 0x40f809  jalr        $v0
label_28200c:
    if (ctx->pc == 0x28200Cu) {
        ctx->pc = 0x28200Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282008u;
        // 0x28200c: 0x2404007c  addiu       $a0, $zero, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
        ctx->in_delay_slot = false;
        ctx->pc = 0x282010u;
        goto label_282010;
    }
    ctx->pc = 0x282008u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x282010u);
        ctx->pc = 0x28200Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282008u;
        // 0x28200c: 0x2404007c  addiu       $a0, $zero, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x282008u, 0x282010u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x282010u;
label_282010:
    // 0x282010: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x282010u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_282014:
    // 0x282014: 0x8f828840  lw          $v0, -0x77C0($gp)
    ctx->pc = 0x282014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936640)));
label_282018:
    // 0x282018: 0x503021  addu        $a2, $v0, $s0
    ctx->pc = 0x282018u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_28201c:
    // 0x28201c: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
label_282020:
    if (ctx->pc == 0x282020u) {
        ctx->pc = 0x282020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28201Cu;
        // 0x282020: 0xacc50000  sw          $a1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x282024u;
        goto label_282024;
    }
    ctx->pc = 0x28201Cu;
    {
        const bool branch_taken_0x28201c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x282020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28201Cu;
        // 0x282020: 0xacc50000  sw          $a1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28201c) {
            ctx->pc = 0x28204Cu;
            goto label_28204c;
        }
    }
    ctx->pc = 0x282024u;
label_282024:
    // 0x282024: 0x24a2007c  addiu       $v0, $a1, 0x7C
    ctx->pc = 0x282024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 124));
label_282028:
    // 0x282028: 0x24a3000c  addiu       $v1, $a1, 0xC
    ctx->pc = 0x282028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
label_28202c:
    // 0x28202c: 0x3c049a31  lui         $a0, 0x9A31
    ctx->pc = 0x28202cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39473 << 16));
label_282030:
    // 0x282030: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x282030u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
label_282034:
    // 0x282034: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x282034u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
label_282038:
    // 0x282038: 0x34849039  ori         $a0, $a0, 0x9039
    ctx->pc = 0x282038u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)36921);
label_28203c:
    // 0x28203c: 0xc0a077e  jal         func_281DF8
label_282040:
    if (ctx->pc == 0x282040u) {
        ctx->pc = 0x282040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28203Cu;
        // 0x282040: 0xacc50008  sw          $a1, 0x8($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x282044u;
        goto label_282044;
    }
    ctx->pc = 0x28203Cu;
    SET_GPR_U32(ctx, 31, 0x282044u);
    ctx->pc = 0x282040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28203Cu;
    // 0x282040: 0xacc50008  sw          $a1, 0x8($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281DF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x281DF8u, 0x28203Cu, 0x282044u)) {
        return;
    }
    ctx->pc = 0x282044u;
label_282044:
    // 0x282044: 0x10000002  b           . + 4 + (0x2 << 2)
label_282048:
    if (ctx->pc == 0x282048u) {
        ctx->pc = 0x282048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282044u;
        // 0x282048: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28204Cu;
        goto label_28204c;
    }
    ctx->pc = 0x282044u;
    {
        const bool branch_taken_0x282044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282044u;
        // 0x282048: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282044) {
            ctx->pc = 0x282050u;
            goto label_282050;
        }
    }
    ctx->pc = 0x28204Cu;
label_28204c:
    // 0x28204c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x28204cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_282050:
    // 0x282050: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x282050u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_282054:
    // 0x282054: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x282054u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_282058:
    // 0x282058: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x282058u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_28205c:
    // 0x28205c: 0x3e00008  jr          $ra
label_282060:
    if (ctx->pc == 0x282060u) {
        ctx->pc = 0x282060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28205Cu;
        // 0x282060: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x282064u;
        goto label_282064;
    }
    ctx->pc = 0x28205Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x282060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28205Cu;
        // 0x282060: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28205Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x282064u;
label_282064:
    // 0x282064: 0x0  nop
    ctx->pc = 0x282064u;
    // NOP
    ctx->pc = 0x282068u;
}
