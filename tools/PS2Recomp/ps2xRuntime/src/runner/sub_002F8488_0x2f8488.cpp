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

// Function: sub_002F8488
// Address: 0x2f8488 - 0x2f8550
void sub_002F8488_0x2f8488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F8488_0x2f8488");
#endif

    switch (ctx->pc) {
        case 0x2f84c0u: goto label_2f84c0;
        case 0x2f84fcu: goto label_2f84fc;
        case 0x2f8510u: goto label_2f8510;
        case 0x2f8518u: goto label_2f8518;
        case 0x2f8528u: goto label_2f8528;
        default: break;
    }

    ctx->pc = 0x2f8488u;

    // 0x2f8488: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2f8488u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2f848c: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x2f848cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x2f8490: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2f8490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2f8494: 0x8c626660  lw          $v0, 0x6660($v1)
    ctx->pc = 0x2f8494u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x686660u));
    // 0x2f8498: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2f8498u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f849c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2f849cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2f84a0: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2f84a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2f84a4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F84A4u;
    {
        const bool branch_taken_0x2f84a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F84A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F84A4u;
        // 0x2f84a8: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f84a4) {
            ctx->pc = 0x2F84B4u;
            goto label_2f84b4;
        }
    }
    ctx->pc = 0x2F84ACu;
    // 0x2f84ac: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x2F84ACu;
    {
        const bool branch_taken_0x2f84ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F84B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F84ACu;
        // 0x2f84b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f84ac) {
            ctx->pc = 0x2F852Cu;
            goto label_2f852c;
        }
    }
    ctx->pc = 0x2F84B4u;
label_2f84b4:
    // 0x2f84b4: 0x3c120072  lui         $s2, 0x72
    ctx->pc = 0x2f84b4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)114 << 16));
    // 0x2f84b8: 0xc0c84d8  jal         func_321360
    ctx->pc = 0x2F84B8u;
    SET_GPR_U32(ctx, 31, 0x2F84C0u);
    ctx->pc = 0x2F84BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F84B8u;
    // 0x2f84bc: 0x8e447b80  lw          $a0, 0x7B80($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 31616)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321360u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321360u, 0x2F84B8u, 0x2F84C0u)) {
        return;
    }
    ctx->pc = 0x2F84C0u;
label_2f84c0:
    // 0x2f84c0: 0x3c030072  lui         $v1, 0x72
    ctx->pc = 0x2f84c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)114 << 16));
    // 0x2f84c4: 0x3c040072  lui         $a0, 0x72
    ctx->pc = 0x2f84c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)114 << 16));
    // 0x2f84c8: 0x247057c0  addiu       $s0, $v1, 0x57C0
    ctx->pc = 0x2f84c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 22464));
    // 0x2f84cc: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x2f84ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x2f84d0: 0xac7157c0  sw          $s1, 0x57C0($v1)
    ctx->pc = 0x2f84d0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x7257C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7257C0u, _value); } while (0);
    // 0x2f84d4: 0x248456c0  addiu       $a0, $a0, 0x56C0
    ctx->pc = 0x2f84d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22208));
    // 0x2f84d8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2f84d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2f84dc: 0x34a51302  ori         $a1, $a1, 0x1302
    ctx->pc = 0x2f84dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4866);
    // 0x2f84e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f84e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f84e4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2f84e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f84e8: 0x24080090  addiu       $t0, $zero, 0x90
    ctx->pc = 0x2f84e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x2f84ec: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x2f84ecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f84f0: 0x240a0090  addiu       $t2, $zero, 0x90
    ctx->pc = 0x2f84f0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x2f84f4: 0xc0c92ee  jal         func_324BB8
    ctx->pc = 0x2F84F4u;
    SET_GPR_U32(ctx, 31, 0x2F84FCu);
    ctx->pc = 0x2F84F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F84F4u;
    // 0x2f84f8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324BB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x324BB8u, 0x2F84F4u, 0x2F84FCu)) {
        return;
    }
    ctx->pc = 0x2F84FCu;
label_2f84fc:
    // 0x2f84fc: 0x4410008  bgez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2F84FCu;
    {
        const bool branch_taken_0x2f84fc = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x2F8500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F84FCu;
        // 0x2f8500: 0x8e447b80  lw          $a0, 0x7B80($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 31616)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f84fc) {
            ctx->pc = 0x2F8520u;
            goto label_2f8520;
        }
    }
    ctx->pc = 0x2F8504u;
    // 0x2f8504: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x2f8504u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x2f8508: 0xc0be1f2  jal         func_2F87C8
    ctx->pc = 0x2F8508u;
    SET_GPR_U32(ctx, 31, 0x2F8510u);
    ctx->pc = 0x2F850Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8508u;
    // 0x2f850c: 0x24840300  addiu       $a0, $a0, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F87C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F87C8u, 0x2F8508u, 0x2F8510u)) {
        return;
    }
    ctx->pc = 0x2F8510u;
label_2f8510:
    // 0x2f8510: 0xc0c84d0  jal         func_321340
    ctx->pc = 0x2F8510u;
    SET_GPR_U32(ctx, 31, 0x2F8518u);
    ctx->pc = 0x2F8514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8510u;
    // 0x2f8514: 0x8e447b80  lw          $a0, 0x7B80($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 31616)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321340u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321340u, 0x2F8510u, 0x2F8518u)) {
        return;
    }
    ctx->pc = 0x2F8518u;
label_2f8518:
    // 0x2f8518: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2F8518u;
    {
        const bool branch_taken_0x2f8518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F851Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8518u;
        // 0x2f851c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8518) {
            ctx->pc = 0x2F852Cu;
            goto label_2f852c;
        }
    }
    ctx->pc = 0x2F8520u;
label_2f8520:
    // 0x2f8520: 0xc0c84d0  jal         func_321340
    ctx->pc = 0x2F8520u;
    SET_GPR_U32(ctx, 31, 0x2F8528u);
    ctx->pc = 0x2F8524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8520u;
    // 0x2f8524: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321340u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321340u, 0x2F8520u, 0x2F8528u)) {
        return;
    }
    ctx->pc = 0x2F8528u;
label_2f8528:
    // 0x2f8528: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2f8528u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f852c:
    // 0x2f852c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2f852cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f8530: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2f8530u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f8534: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2f8534u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f8538: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2f8538u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f853c: 0x3e00008  jr          $ra
    ctx->pc = 0x2F853Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F8540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F853Cu;
        // 0x2f8540: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F853Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F8544u;
    // 0x2f8544: 0x0  nop
    ctx->pc = 0x2f8544u;
    // NOP
    // 0x2f8548: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2f8548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2f854c: 0x0  nop
    ctx->pc = 0x2f854cu;
    // NOP
    ctx->pc = 0x2f8550u;
}
