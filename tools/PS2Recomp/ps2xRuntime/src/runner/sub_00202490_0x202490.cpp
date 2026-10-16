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

// Function: sub_00202490
// Address: 0x202490 - 0x202570
void sub_00202490_0x202490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00202490_0x202490");
#endif

    switch (ctx->pc) {
        case 0x2024ccu: goto label_2024cc;
        case 0x2024f8u: goto label_2024f8;
        case 0x20250cu: goto label_20250c;
        case 0x202514u: goto label_202514;
        case 0x20251cu: goto label_20251c;
        case 0x202540u: goto label_202540;
        default: break;
    }

    ctx->pc = 0x202490u;

    // 0x202490: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x202490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x202494: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x202494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x202498: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x202498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x20249c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x20249cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2024a0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2024a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2024a4: 0x8c440270  lw          $a0, 0x270($v0)
    ctx->pc = 0x2024a4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5C0270u));
    // 0x2024a8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2024a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2024ac: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2024acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2024b0: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2024B0u;
    {
        const bool branch_taken_0x2024b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2024B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2024B0u;
        // 0x2024b4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2024b0) {
            ctx->pc = 0x2024D8u;
            goto label_2024d8;
        }
    }
    ctx->pc = 0x2024B8u;
    // 0x2024b8: 0x2e220041  sltiu       $v0, $s1, 0x41
    ctx->pc = 0x2024b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)65) ? 1 : 0);
    // 0x2024bc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2024BCu;
    {
        const bool branch_taken_0x2024bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2024C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2024BCu;
        // 0x2024c0: 0x3c02005c  lui         $v0, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2024bc) {
            ctx->pc = 0x2024DCu;
            goto label_2024dc;
        }
    }
    ctx->pc = 0x2024C4u;
    // 0x2024c4: 0xc080aac  jal         func_202AB0
    ctx->pc = 0x2024C4u;
    SET_GPR_U32(ctx, 31, 0x2024CCu);
    ctx->pc = 0x2024C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2024C4u;
    // 0x2024c8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202AB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202AB0u, 0x2024C4u, 0x2024CCu)) {
        return;
    }
    ctx->pc = 0x2024CCu;
label_2024cc:
    // 0x2024cc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2024ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2024d0: 0x1600001c  bnez        $s0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2024D0u;
    {
        const bool branch_taken_0x2024d0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2024D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2024D0u;
        // 0x2024d4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2024d0) {
            ctx->pc = 0x202544u;
            goto label_202544;
        }
    }
    ctx->pc = 0x2024D8u;
label_2024d8:
    // 0x2024d8: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x2024d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
label_2024dc:
    // 0x2024dc: 0x8c440274  lw          $a0, 0x274($v0)
    ctx->pc = 0x2024dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 628)));
    // 0x2024e0: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2024E0u;
    {
        const bool branch_taken_0x2024e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2024E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2024E0u;
        // 0x2024e4: 0x2e220401  sltiu       $v0, $s1, 0x401 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)1025) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2024e0) {
            ctx->pc = 0x202504u;
            goto label_202504;
        }
    }
    ctx->pc = 0x2024E8u;
    // 0x2024e8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2024E8u;
    {
        const bool branch_taken_0x2024e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2024e8) {
            ctx->pc = 0x202504u;
            goto label_202504;
        }
    }
    ctx->pc = 0x2024F0u;
    // 0x2024f0: 0xc080b60  jal         func_202D80
    ctx->pc = 0x2024F0u;
    SET_GPR_U32(ctx, 31, 0x2024F8u);
    ctx->pc = 0x2024F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2024F0u;
    // 0x2024f4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202D80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202D80u, 0x2024F0u, 0x2024F8u)) {
        return;
    }
    ctx->pc = 0x2024F8u;
label_2024f8:
    // 0x2024f8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2024f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2024fc: 0x16000011  bnez        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2024FCu;
    {
        const bool branch_taken_0x2024fc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x202500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2024FCu;
        // 0x202500: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2024fc) {
            ctx->pc = 0x202544u;
            goto label_202544;
        }
    }
    ctx->pc = 0x202504u;
label_202504:
    // 0x202504: 0xc0807e4  jal         func_201F90
    ctx->pc = 0x202504u;
    SET_GPR_U32(ctx, 31, 0x20250Cu);
    ctx->pc = 0x201F90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x201F90u, 0x202504u, 0x20250Cu)) {
        return;
    }
    ctx->pc = 0x20250Cu;
label_20250c:
    // 0x20250c: 0xc08083a  jal         func_2020E8
    ctx->pc = 0x20250Cu;
    SET_GPR_U32(ctx, 31, 0x202514u);
    ctx->pc = 0x2020E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2020E8u, 0x20250Cu, 0x202514u)) {
        return;
    }
    ctx->pc = 0x202514u;
label_202514:
    // 0x202514: 0xc0c5472  jal         func_3151C8
    ctx->pc = 0x202514u;
    SET_GPR_U32(ctx, 31, 0x20251Cu);
    ctx->pc = 0x202518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202514u;
    // 0x202518: 0x2222021  addu        $a0, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3151C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3151C8u, 0x202514u, 0x20251Cu)) {
        return;
    }
    ctx->pc = 0x20251Cu;
label_20251c:
    // 0x20251c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x20251cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202520: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x202520u;
    {
        const bool branch_taken_0x202520 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x202524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202520u;
        // 0x202524: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202520) {
            ctx->pc = 0x202544u;
            goto label_202544;
        }
    }
    ctx->pc = 0x202528u;
    // 0x202528: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x202528u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
    // 0x20252c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x20252cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202530: 0x24843c18  addiu       $a0, $a0, 0x3C18
    ctx->pc = 0x202530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15384));
    // 0x202534: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x202534u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202538: 0xc0c4f0a  jal         func_313C28
    ctx->pc = 0x202538u;
    SET_GPR_U32(ctx, 31, 0x202540u);
    ctx->pc = 0x20253Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202538u;
    // 0x20253c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313C28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x313C28u, 0x202538u, 0x202540u)) {
        return;
    }
    ctx->pc = 0x202540u;
label_202540:
    // 0x202540: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x202540u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_202544:
    // 0x202544: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x202544u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x202548: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x202548u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20254c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x20254cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x202550: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x202550u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x202554: 0x3e00008  jr          $ra
    ctx->pc = 0x202554u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x202558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202554u;
        // 0x202558: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x202554u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20255Cu;
    // 0x20255c: 0x0  nop
    ctx->pc = 0x20255cu;
    // NOP
    // 0x202560: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x202560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x202564: 0x0  nop
    ctx->pc = 0x202564u;
    // NOP
    // 0x202568: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x202568u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x20256c: 0x0  nop
    ctx->pc = 0x20256cu;
    // NOP
    ctx->pc = 0x202570u;
}
