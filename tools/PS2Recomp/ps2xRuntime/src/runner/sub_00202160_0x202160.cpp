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

// Function: sub_00202160
// Address: 0x202160 - 0x202220
void sub_00202160_0x202160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00202160_0x202160");
#endif

    switch (ctx->pc) {
        case 0x202194u: goto label_202194;
        case 0x2021c0u: goto label_2021c0;
        case 0x2021d4u: goto label_2021d4;
        case 0x2021dcu: goto label_2021dc;
        case 0x2021e4u: goto label_2021e4;
        case 0x202208u: goto label_202208;
        default: break;
    }

    ctx->pc = 0x202160u;

    // 0x202160: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x202160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x202164: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x202164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x202168: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x202168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x20216c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x20216cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202170: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x202170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x202174: 0x8c440270  lw          $a0, 0x270($v0)
    ctx->pc = 0x202174u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5C0270u));
    // 0x202178: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x202178u;
    {
        const bool branch_taken_0x202178 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x20217Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202178u;
        // 0x20217c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202178) {
            ctx->pc = 0x2021A0u;
            goto label_2021a0;
        }
    }
    ctx->pc = 0x202180u;
    // 0x202180: 0x2e220041  sltiu       $v0, $s1, 0x41
    ctx->pc = 0x202180u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)65) ? 1 : 0);
    // 0x202184: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x202184u;
    {
        const bool branch_taken_0x202184 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x202188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202184u;
        // 0x202188: 0x3c02005c  lui         $v0, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202184) {
            ctx->pc = 0x2021A4u;
            goto label_2021a4;
        }
    }
    ctx->pc = 0x20218Cu;
    // 0x20218c: 0xc080aac  jal         func_202AB0
    ctx->pc = 0x20218Cu;
    SET_GPR_U32(ctx, 31, 0x202194u);
    ctx->pc = 0x202190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20218Cu;
    // 0x202190: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202AB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202AB0u, 0x20218Cu, 0x202194u)) {
        return;
    }
    ctx->pc = 0x202194u;
label_202194:
    // 0x202194: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x202194u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202198: 0x1600001c  bnez        $s0, . + 4 + (0x1C << 2)
    ctx->pc = 0x202198u;
    {
        const bool branch_taken_0x202198 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x20219Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202198u;
        // 0x20219c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202198) {
            ctx->pc = 0x20220Cu;
            goto label_20220c;
        }
    }
    ctx->pc = 0x2021A0u;
label_2021a0:
    // 0x2021a0: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x2021a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
label_2021a4:
    // 0x2021a4: 0x8c440274  lw          $a0, 0x274($v0)
    ctx->pc = 0x2021a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 628)));
    // 0x2021a8: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2021A8u;
    {
        const bool branch_taken_0x2021a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2021ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2021A8u;
        // 0x2021ac: 0x2e220401  sltiu       $v0, $s1, 0x401 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)1025) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2021a8) {
            ctx->pc = 0x2021CCu;
            goto label_2021cc;
        }
    }
    ctx->pc = 0x2021B0u;
    // 0x2021b0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2021B0u;
    {
        const bool branch_taken_0x2021b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2021b0) {
            ctx->pc = 0x2021CCu;
            goto label_2021cc;
        }
    }
    ctx->pc = 0x2021B8u;
    // 0x2021b8: 0xc080b60  jal         func_202D80
    ctx->pc = 0x2021B8u;
    SET_GPR_U32(ctx, 31, 0x2021C0u);
    ctx->pc = 0x2021BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2021B8u;
    // 0x2021bc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202D80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202D80u, 0x2021B8u, 0x2021C0u)) {
        return;
    }
    ctx->pc = 0x2021C0u;
label_2021c0:
    // 0x2021c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2021c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2021c4: 0x16000011  bnez        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2021C4u;
    {
        const bool branch_taken_0x2021c4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2021C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2021C4u;
        // 0x2021c8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2021c4) {
            ctx->pc = 0x20220Cu;
            goto label_20220c;
        }
    }
    ctx->pc = 0x2021CCu;
label_2021cc:
    // 0x2021cc: 0xc0807e4  jal         func_201F90
    ctx->pc = 0x2021CCu;
    SET_GPR_U32(ctx, 31, 0x2021D4u);
    ctx->pc = 0x201F90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x201F90u, 0x2021CCu, 0x2021D4u)) {
        return;
    }
    ctx->pc = 0x2021D4u;
label_2021d4:
    // 0x2021d4: 0xc08083a  jal         func_2020E8
    ctx->pc = 0x2021D4u;
    SET_GPR_U32(ctx, 31, 0x2021DCu);
    ctx->pc = 0x2020E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2020E8u, 0x2021D4u, 0x2021DCu)) {
        return;
    }
    ctx->pc = 0x2021DCu;
label_2021dc:
    // 0x2021dc: 0xc0c5472  jal         func_3151C8
    ctx->pc = 0x2021DCu;
    SET_GPR_U32(ctx, 31, 0x2021E4u);
    ctx->pc = 0x2021E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2021DCu;
    // 0x2021e0: 0x2222021  addu        $a0, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3151C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3151C8u, 0x2021DCu, 0x2021E4u)) {
        return;
    }
    ctx->pc = 0x2021E4u;
label_2021e4:
    // 0x2021e4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2021e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2021e8: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2021E8u;
    {
        const bool branch_taken_0x2021e8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2021ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2021E8u;
        // 0x2021ec: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2021e8) {
            ctx->pc = 0x20220Cu;
            goto label_20220c;
        }
    }
    ctx->pc = 0x2021F0u;
    // 0x2021f0: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x2021f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
    // 0x2021f4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2021f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2021f8: 0x24843c18  addiu       $a0, $a0, 0x3C18
    ctx->pc = 0x2021f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15384));
    // 0x2021fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2021fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202200: 0xc0c4f0a  jal         func_313C28
    ctx->pc = 0x202200u;
    SET_GPR_U32(ctx, 31, 0x202208u);
    ctx->pc = 0x202204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202200u;
    // 0x202204: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313C28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x313C28u, 0x202200u, 0x202208u)) {
        return;
    }
    ctx->pc = 0x202208u;
label_202208:
    // 0x202208: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x202208u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20220c:
    // 0x20220c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20220cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x202210: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x202210u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x202214: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x202214u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x202218: 0x3e00008  jr          $ra
    ctx->pc = 0x202218u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20221Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202218u;
        // 0x20221c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x202218u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x202220u;
}
