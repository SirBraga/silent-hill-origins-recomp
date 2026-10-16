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

// Function: sub_00321B90
// Address: 0x321b90 - 0x321c18
void sub_00321B90_0x321b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00321B90_0x321b90");
#endif

    switch (ctx->pc) {
        case 0x321bc8u: goto label_321bc8;
        case 0x321bdcu: goto label_321bdc;
        default: break;
    }

    ctx->pc = 0x321b90u;

    // 0x321b90: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x321b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x321b94: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x321b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x321b98: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x321b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x321b9c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x321b9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321ba0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x321ba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x321ba4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x321ba4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321ba8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x321ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x321bac: 0x40106000  mfc0        $s0, Status
    ctx->pc = 0x321bacu;
    SET_GPR_S32(ctx, 16, (int32_t)ctx->cop0_status);
    // 0x321bb0: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x321bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x321bb4: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x321bb4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x321bb8: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x321BB8u;
    {
        const bool branch_taken_0x321bb8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x321bb8) {
            ctx->pc = 0x321BC8u;
            goto label_321bc8;
        }
    }
    ctx->pc = 0x321BC0u;
    // 0x321bc0: 0xc0c9ba4  jal         func_326E90
    ctx->pc = 0x321BC0u;
    SET_GPR_U32(ctx, 31, 0x321BC8u);
    ctx->pc = 0x326E90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x326E90u, 0x321BC0u, 0x321BC8u)) {
        return;
    }
    ctx->pc = 0x321BC8u;
label_321bc8:
    // 0x321bc8: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x321bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x321bcc: 0x3484ffc0  ori         $a0, $a0, 0xFFC0
    ctx->pc = 0x321bccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65472);
    // 0x321bd0: 0x2242824  and         $a1, $s1, $a0
    ctx->pc = 0x321bd0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & GPR_U64(ctx, 4));
    // 0x321bd4: 0xc0c86ba  jal         func_321AE8
    ctx->pc = 0x321BD4u;
    SET_GPR_U32(ctx, 31, 0x321BDCu);
    ctx->pc = 0x321BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321BD4u;
    // 0x321bd8: 0x2442024  and         $a0, $s2, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321AE8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321AE8u, 0x321BD4u, 0x321BDCu)) {
        return;
    }
    ctx->pc = 0x321BDCu;
label_321bdc:
    // 0x321bdc: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x321BDCu;
    {
        const bool branch_taken_0x321bdc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x321BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321BDCu;
        // 0x321be0: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321bdc) {
            ctx->pc = 0x321BF8u;
            goto label_321bf8;
        }
    }
    ctx->pc = 0x321BE4u;
    // 0x321be4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x321be4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x321be8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x321be8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x321bec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x321becu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x321bf0: 0x80c9bb8  j           func_326EE0
    ctx->pc = 0x321BF0u;
    ctx->pc = 0x321BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321BF0u;
    // 0x321bf4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326EE0u;
    sub_00326EE0_0x326ee0(rdram, ctx, runtime); return;
    ctx->pc = 0x321BF8u;
label_321bf8:
    // 0x321bf8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x321bf8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x321bfc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x321bfcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x321c00: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x321c00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x321c04: 0x3e00008  jr          $ra
    ctx->pc = 0x321C04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x321C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321C04u;
        // 0x321c08: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321C04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321C0Cu;
    // 0x321c0c: 0x0  nop
    ctx->pc = 0x321c0cu;
    // NOP
    // 0x321c10: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x321c10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x321c14: 0x0  nop
    ctx->pc = 0x321c14u;
    // NOP
    ctx->pc = 0x321c18u;
}
