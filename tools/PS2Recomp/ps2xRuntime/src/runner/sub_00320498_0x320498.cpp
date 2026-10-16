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

// Function: sub_00320498
// Address: 0x320498 - 0x320598
void sub_00320498_0x320498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00320498_0x320498");
#endif

    switch (ctx->pc) {
        case 0x3204e4u: goto label_3204e4;
        case 0x32050cu: goto label_32050c;
        case 0x320520u: goto label_320520;
        case 0x320538u: goto label_320538;
        case 0x32055cu: goto label_32055c;
        case 0x32056cu: goto label_32056c;
        default: break;
    }

    ctx->pc = 0x320498u;

    // 0x320498: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x320498u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x32049c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x32049cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x3204a0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3204a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3204a4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x3204a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3204a8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x3204a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x3204ac: 0x32230003  andi        $v1, $s1, 0x3
    ctx->pc = 0x3204acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)3);
    // 0x3204b0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3204b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x3204b4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3204b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3204b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3204b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3204bc: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x3204BCu;
    {
        const bool branch_taken_0x3204bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3204C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3204BCu;
        // 0x3204c0: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3204bc) {
            ctx->pc = 0x3204E8u;
            goto label_3204e8;
        }
    }
    ctx->pc = 0x3204C4u;
    // 0x3204c4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3204c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3204c8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3204c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x3204cc: 0x24422398  addiu       $v0, $v0, 0x2398
    ctx->pc = 0x3204ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9112));
    // 0x3204d0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3204d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3204d4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3204d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3204d8: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x3204d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3204dc: 0xc0c7fb4  jal         func_31FED0
    ctx->pc = 0x3204DCu;
    SET_GPR_U32(ctx, 31, 0x3204E4u);
    ctx->pc = 0x3204E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3204DCu;
    // 0x3204e0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31FED0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31FED0u, 0x3204DCu, 0x3204E4u)) {
        return;
    }
    ctx->pc = 0x3204E4u;
label_3204e4:
    // 0x3204e4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3204e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3204e8:
    // 0x3204e8: 0x118883  sra         $s1, $s1, 2
    ctx->pc = 0x3204e8u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 2));
    // 0x3204ec: 0x12200023  beqz        $s1, . + 4 + (0x23 << 2)
    ctx->pc = 0x3204ECu;
    {
        const bool branch_taken_0x3204ec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3204F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3204ECu;
        // 0x3204f0: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3204ec) {
            ctx->pc = 0x32057Cu;
            goto label_32057c;
        }
    }
    ctx->pc = 0x3204F4u;
    // 0x3204f4: 0x8e700048  lw          $s0, 0x48($s3)
    ctx->pc = 0x3204f4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
    // 0x3204f8: 0x16000013  bnez        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x3204F8u;
    {
        const bool branch_taken_0x3204f8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3204FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3204F8u;
        // 0x3204fc: 0x32220001  andi        $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3204f8) {
            ctx->pc = 0x320548u;
            goto label_320548;
        }
    }
    ctx->pc = 0x320500u;
    // 0x320500: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x320500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320504: 0xc0c8096  jal         func_320258
    ctx->pc = 0x320504u;
    SET_GPR_U32(ctx, 31, 0x32050Cu);
    ctx->pc = 0x320508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320504u;
    // 0x320508: 0x24050271  addiu       $a1, $zero, 0x271 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 625));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320258u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x320258u, 0x320504u, 0x32050Cu)) {
        return;
    }
    ctx->pc = 0x32050Cu;
label_32050c:
    // 0x32050c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x32050cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320510: 0xae620048  sw          $v0, 0x48($s3)
    ctx->pc = 0x320510u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 72), GPR_U32(ctx, 2));
    // 0x320514: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x320514u;
    {
        const bool branch_taken_0x320514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x320518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320514u;
        // 0x320518: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320514) {
            ctx->pc = 0x320544u;
            goto label_320544;
        }
    }
    ctx->pc = 0x32051Cu;
    // 0x32051c: 0x0  nop
    ctx->pc = 0x32051cu;
    // NOP
label_320520:
    // 0x320520: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x320520u;
    {
        const bool branch_taken_0x320520 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x320520) {
            ctx->pc = 0x320524u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x320520u;
            // 0x320524: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x320544u;
            goto label_320544;
        }
    }
    ctx->pc = 0x320528u;
    // 0x320528: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x320528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32052c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x32052cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320530: 0xc0c80a4  jal         func_320290
    ctx->pc = 0x320530u;
    SET_GPR_U32(ctx, 31, 0x320538u);
    ctx->pc = 0x320534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320530u;
    // 0x320534: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320290u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x320290u, 0x320530u, 0x320538u)) {
        return;
    }
    ctx->pc = 0x320538u;
label_320538:
    // 0x320538: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x320538u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x32053c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x32053cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x320540: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x320540u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_320544:
    // 0x320544: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x320544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_320548:
    // 0x320548: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x320548u;
    {
        const bool branch_taken_0x320548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32054Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320548u;
        // 0x32054c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320548) {
            ctx->pc = 0x32056Cu;
            goto label_32056c;
        }
    }
    ctx->pc = 0x320550u;
    // 0x320550: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x320550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320554: 0xc0c80a4  jal         func_320290
    ctx->pc = 0x320554u;
    SET_GPR_U32(ctx, 31, 0x32055Cu);
    ctx->pc = 0x320558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320554u;
    // 0x320558: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320290u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x320290u, 0x320554u, 0x32055Cu)) {
        return;
    }
    ctx->pc = 0x32055Cu;
label_32055c:
    // 0x32055c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x32055cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320560: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x320560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320564: 0xc0c7fa6  jal         func_31FE98
    ctx->pc = 0x320564u;
    SET_GPR_U32(ctx, 31, 0x32056Cu);
    ctx->pc = 0x320568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320564u;
    // 0x320568: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31FE98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31FE98u, 0x320564u, 0x32056Cu)) {
        return;
    }
    ctx->pc = 0x32056Cu;
label_32056c:
    // 0x32056c: 0x118843  sra         $s1, $s1, 1
    ctx->pc = 0x32056cu;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 1));
    // 0x320570: 0x5620ffeb  bnel        $s1, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x320570u;
    {
        const bool branch_taken_0x320570 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x320570) {
            ctx->pc = 0x320574u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x320570u;
            // 0x320574: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x320520u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_320520;
        }
    }
    ctx->pc = 0x320578u;
    // 0x320578: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x320578u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_32057c:
    // 0x32057c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x32057cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x320580: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x320580u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x320584: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x320584u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x320588: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x320588u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32058c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32058cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x320590: 0x3e00008  jr          $ra
    ctx->pc = 0x320590u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x320594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320590u;
        // 0x320594: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320590u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x320598u;
}
