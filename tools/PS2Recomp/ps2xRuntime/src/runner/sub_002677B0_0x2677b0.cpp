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

// Function: sub_002677B0
// Address: 0x2677b0 - 0x267848
void sub_002677B0_0x2677b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002677B0_0x2677b0");
#endif

    switch (ctx->pc) {
        case 0x2677b0u: goto label_2677b0;
        case 0x2677b4u: goto label_2677b4;
        case 0x2677b8u: goto label_2677b8;
        case 0x2677bcu: goto label_2677bc;
        case 0x2677c0u: goto label_2677c0;
        case 0x2677c4u: goto label_2677c4;
        case 0x2677c8u: goto label_2677c8;
        case 0x2677ccu: goto label_2677cc;
        case 0x2677d0u: goto label_2677d0;
        case 0x2677d4u: goto label_2677d4;
        case 0x2677d8u: goto label_2677d8;
        case 0x2677dcu: goto label_2677dc;
        case 0x2677e0u: goto label_2677e0;
        case 0x2677e4u: goto label_2677e4;
        case 0x2677e8u: goto label_2677e8;
        case 0x2677ecu: goto label_2677ec;
        case 0x2677f0u: goto label_2677f0;
        case 0x2677f4u: goto label_2677f4;
        case 0x2677f8u: goto label_2677f8;
        case 0x2677fcu: goto label_2677fc;
        case 0x267800u: goto label_267800;
        case 0x267804u: goto label_267804;
        case 0x267808u: goto label_267808;
        case 0x26780cu: goto label_26780c;
        case 0x267810u: goto label_267810;
        case 0x267814u: goto label_267814;
        case 0x267818u: goto label_267818;
        case 0x26781cu: goto label_26781c;
        case 0x267820u: goto label_267820;
        case 0x267824u: goto label_267824;
        case 0x267828u: goto label_267828;
        case 0x26782cu: goto label_26782c;
        case 0x267830u: goto label_267830;
        case 0x267834u: goto label_267834;
        case 0x267838u: goto label_267838;
        case 0x26783cu: goto label_26783c;
        case 0x267840u: goto label_267840;
        case 0x267844u: goto label_267844;
        default: break;
    }

    ctx->pc = 0x2677b0u;

label_2677b0:
    // 0x2677b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2677b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2677b4:
    // 0x2677b4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2677b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_2677b8:
    // 0x2677b8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2677b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2677bc:
    // 0x2677bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2677bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2677c0:
    // 0x2677c0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2677c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_2677c4:
    // 0x2677c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2677c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2677c8:
    // 0x2677c8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2677c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2677cc:
    // 0x2677cc: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_2677d0:
    if (ctx->pc == 0x2677D0u) {
        ctx->pc = 0x2677D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2677CCu;
        // 0x2677d0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2677D4u;
        goto label_2677d4;
    }
    ctx->pc = 0x2677CCu;
    {
        const bool branch_taken_0x2677cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2677D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2677CCu;
        // 0x2677d0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2677cc) {
            ctx->pc = 0x267808u;
            goto label_267808;
        }
    }
    ctx->pc = 0x2677D4u;
label_2677d4:
    // 0x2677d4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2677d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2677d8:
    // 0x2677d8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2677d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2677dc:
    // 0x2677dc: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x2677dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_2677e0:
    // 0x2677e0: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x2677e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_2677e4:
    // 0x2677e4: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_2677e8:
    if (ctx->pc == 0x2677E8u) {
        ctx->pc = 0x2677E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2677E4u;
        // 0x2677e8: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2677ECu;
        goto label_2677ec;
    }
    ctx->pc = 0x2677E4u;
    {
        const bool branch_taken_0x2677e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2677e4) {
            ctx->pc = 0x2677E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2677E4u;
            // 0x2677e8: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2677F8u;
            goto label_2677f8;
        }
    }
    ctx->pc = 0x2677ECu;
label_2677ec:
    // 0x2677ec: 0xc092466  jal         func_249198
label_2677f0:
    if (ctx->pc == 0x2677F0u) {
        ctx->pc = 0x2677F4u;
        goto label_2677f4;
    }
    ctx->pc = 0x2677ECu;
    SET_GPR_U32(ctx, 31, 0x2677F4u);
    ctx->pc = 0x249198u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249198u, 0x2677ECu, 0x2677F4u)) {
        return;
    }
    ctx->pc = 0x2677F4u;
label_2677f4:
    // 0x2677f4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2677f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2677f8:
    // 0x2677f8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2677f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2677fc:
    // 0x2677fc: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x2677fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_267800:
    // 0x267800: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_267804:
    if (ctx->pc == 0x267804u) {
        ctx->pc = 0x267804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267800u;
        // 0x267804: 0x26520014  addiu       $s2, $s2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267808u;
        goto label_267808;
    }
    ctx->pc = 0x267800u;
    {
        const bool branch_taken_0x267800 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x267804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267800u;
        // 0x267804: 0x26520014  addiu       $s2, $s2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267800) {
            ctx->pc = 0x2677D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2677d8;
        }
    }
    ctx->pc = 0x267808u;
label_267808:
    // 0x267808: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x267808u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_26780c:
    // 0x26780c: 0x24420fc8  addiu       $v0, $v0, 0xFC8
    ctx->pc = 0x26780cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
label_267810:
    // 0x267810: 0x8c43010c  lw          $v1, 0x10C($v0)
    ctx->pc = 0x267810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
label_267814:
    // 0x267814: 0x60f809  jalr        $v1
label_267818:
    if (ctx->pc == 0x267818u) {
        ctx->pc = 0x267818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267814u;
        // 0x267818: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26781Cu;
        goto label_26781c;
    }
    ctx->pc = 0x267814u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x26781Cu);
        ctx->pc = 0x267818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267814u;
        // 0x267818: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x267814u, 0x26781Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26781Cu;
label_26781c:
    // 0x26781c: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x26781cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_267820:
    // 0x267820: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x267820u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_267824:
    // 0x267824: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x267824u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_267828:
    // 0x267828: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x267828u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_26782c:
    // 0x26782c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x26782cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_267830:
    // 0x267830: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x267830u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_267834:
    // 0x267834: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x267834u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_267838:
    // 0x267838: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x267838u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_26783c:
    // 0x26783c: 0x3e00008  jr          $ra
label_267840:
    if (ctx->pc == 0x267840u) {
        ctx->pc = 0x267840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26783Cu;
        // 0x267840: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267844u;
        goto label_267844;
    }
    ctx->pc = 0x26783Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x267840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26783Cu;
        // 0x267840: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26783Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x267844u;
label_267844:
    // 0x267844: 0x0  nop
    ctx->pc = 0x267844u;
    // NOP
    ctx->pc = 0x267848u;
}
