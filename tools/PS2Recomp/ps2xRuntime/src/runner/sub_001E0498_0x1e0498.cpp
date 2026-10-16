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

// Function: sub_001E0498
// Address: 0x1e0498 - 0x1e0558
void sub_001E0498_0x1e0498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E0498_0x1e0498");
#endif

    switch (ctx->pc) {
        case 0x1e04b0u: goto label_1e04b0;
        case 0x1e04e4u: goto label_1e04e4;
        case 0x1e050cu: goto label_1e050c;
        default: break;
    }

    ctx->pc = 0x1e0498u;

    // 0x1e0498: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e0498u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e049c: 0x24040a01  addiu       $a0, $zero, 0xA01
    ctx->pc = 0x1e049cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2561));
    // 0x1e04a0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1e04a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1e04a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e04a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e04a8: 0xc095fac  jal         func_257EB0
    ctx->pc = 0x1E04A8u;
    SET_GPR_U32(ctx, 31, 0x1E04B0u);
    ctx->pc = 0x1E04ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E04A8u;
    // 0x1e04ac: 0x3c100034  lui         $s0, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)52 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x257EB0u, 0x1E04A8u, 0x1E04B0u)) {
        return;
    }
    ctx->pc = 0x1E04B0u;
label_1e04b0:
    // 0x1e04b0: 0x4400003  bltz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E04B0u;
    {
        const bool branch_taken_0x1e04b0 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x1E04B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E04B0u;
        // 0x1e04b4: 0xae02e6d4  sw          $v0, -0x192C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294960852), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e04b0) {
            ctx->pc = 0x1E04C0u;
            goto label_1e04c0;
        }
    }
    ctx->pc = 0x1E04B8u;
    // 0x1e04b8: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1E04B8u;
    {
        const bool branch_taken_0x1e04b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E04BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E04B8u;
        // 0x1e04bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e04b8) {
            ctx->pc = 0x1E0520u;
            goto label_1e0520;
        }
    }
    ctx->pc = 0x1E04C0u;
label_1e04c0:
    // 0x1e04c0: 0x3c06001e  lui         $a2, 0x1E
    ctx->pc = 0x1e04c0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)30 << 16));
    // 0x1e04c4: 0x3c07001e  lui         $a3, 0x1E
    ctx->pc = 0x1e04c4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)30 << 16));
    // 0x1e04c8: 0x3c08001e  lui         $t0, 0x1E
    ctx->pc = 0x1e04c8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)30 << 16));
    // 0x1e04cc: 0x24c60558  addiu       $a2, $a2, 0x558
    ctx->pc = 0x1e04ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1368));
    // 0x1e04d0: 0x24e705b0  addiu       $a3, $a3, 0x5B0
    ctx->pc = 0x1e04d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1456));
    // 0x1e04d4: 0x25080628  addiu       $t0, $t0, 0x628
    ctx->pc = 0x1e04d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1576));
    // 0x1e04d8: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1e04d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1e04dc: 0xc095f80  jal         func_257E00
    ctx->pc = 0x1E04DCu;
    SET_GPR_U32(ctx, 31, 0x1E04E4u);
    ctx->pc = 0x1E04E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E04DCu;
    // 0x1e04e0: 0x24050a01  addiu       $a1, $zero, 0xA01 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2561));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257E00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x257E00u, 0x1E04DCu, 0x1E04E4u)) {
        return;
    }
    ctx->pc = 0x1E04E4u;
label_1e04e4:
    // 0x1e04e4: 0x440000d  bltz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1E04E4u;
    {
        const bool branch_taken_0x1e04e4 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x1E04E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E04E4u;
        // 0x1e04e8: 0xae02e6d4  sw          $v0, -0x192C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294960852), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e04e4) {
            ctx->pc = 0x1E051Cu;
            goto label_1e051c;
        }
    }
    ctx->pc = 0x1E04ECu;
    // 0x1e04ec: 0x3c05001e  lui         $a1, 0x1E
    ctx->pc = 0x1e04ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)30 << 16));
    // 0x1e04f0: 0x3c06001e  lui         $a2, 0x1E
    ctx->pc = 0x1e04f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)30 << 16));
    // 0x1e04f4: 0x3c07001e  lui         $a3, 0x1E
    ctx->pc = 0x1e04f4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)30 << 16));
    // 0x1e04f8: 0x24a50708  addiu       $a1, $a1, 0x708
    ctx->pc = 0x1e04f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1800));
    // 0x1e04fc: 0x24c60830  addiu       $a2, $a2, 0x830
    ctx->pc = 0x1e04fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2096));
    // 0x1e0500: 0x24e708b8  addiu       $a3, $a3, 0x8B8
    ctx->pc = 0x1e0500u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2232));
    // 0x1e0504: 0xc095f92  jal         func_257E48
    ctx->pc = 0x1E0504u;
    SET_GPR_U32(ctx, 31, 0x1E050Cu);
    ctx->pc = 0x1E0508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0504u;
    // 0x1e0508: 0x24040a01  addiu       $a0, $zero, 0xA01 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2561));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257E48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x257E48u, 0x1E0504u, 0x1E050Cu)) {
        return;
    }
    ctx->pc = 0x1E050Cu;
label_1e050c:
    // 0x1e050c: 0x8e03e6d4  lw          $v1, -0x192C($s0)
    ctx->pc = 0x1e050cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294960852)));
    // 0x1e0510: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1e0510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1e0514: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1E0514u;
    {
        const bool branch_taken_0x1e0514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0514u;
        // 0x1e0518: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0514) {
            ctx->pc = 0x1E0520u;
            goto label_1e0520;
        }
    }
    ctx->pc = 0x1E051Cu;
label_1e051c:
    // 0x1e051c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e051cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e0520:
    // 0x1e0520: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1e0520u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e0524: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e0524u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0528: 0x3e00008  jr          $ra
    ctx->pc = 0x1E0528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E052Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0528u;
        // 0x1e052c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0528u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E0530u;
    // 0x1e0530: 0x217c2  srl         $v0, $v0, 31
    ctx->pc = 0x1e0530u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x1e0534: 0x0  nop
    ctx->pc = 0x1e0534u;
    // NOP
    // 0x1e0538: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1e0538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1e053c: 0x0  nop
    ctx->pc = 0x1e053cu;
    // NOP
    // 0x1e0540: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1e0540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1e0544: 0x0  nop
    ctx->pc = 0x1e0544u;
    // NOP
    // 0x1e0548: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1e0548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1e054c: 0x0  nop
    ctx->pc = 0x1e054cu;
    // NOP
    // 0x1e0550: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1e0550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1e0554: 0x0  nop
    ctx->pc = 0x1e0554u;
    // NOP
    ctx->pc = 0x1e0558u;
}
