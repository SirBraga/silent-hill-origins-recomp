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

// Function: sub_001A87D8
// Address: 0x1a87d8 - 0x1a8850
void sub_001A87D8_0x1a87d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A87D8_0x1a87d8");
#endif

    switch (ctx->pc) {
        case 0x1a87d8u: goto label_1a87d8;
        case 0x1a87dcu: goto label_1a87dc;
        case 0x1a87e0u: goto label_1a87e0;
        case 0x1a87e4u: goto label_1a87e4;
        case 0x1a87e8u: goto label_1a87e8;
        case 0x1a87ecu: goto label_1a87ec;
        case 0x1a87f0u: goto label_1a87f0;
        case 0x1a87f4u: goto label_1a87f4;
        case 0x1a87f8u: goto label_1a87f8;
        case 0x1a87fcu: goto label_1a87fc;
        case 0x1a8800u: goto label_1a8800;
        case 0x1a8804u: goto label_1a8804;
        case 0x1a8808u: goto label_1a8808;
        case 0x1a880cu: goto label_1a880c;
        case 0x1a8810u: goto label_1a8810;
        case 0x1a8814u: goto label_1a8814;
        case 0x1a8818u: goto label_1a8818;
        case 0x1a881cu: goto label_1a881c;
        case 0x1a8820u: goto label_1a8820;
        case 0x1a8824u: goto label_1a8824;
        case 0x1a8828u: goto label_1a8828;
        case 0x1a882cu: goto label_1a882c;
        case 0x1a8830u: goto label_1a8830;
        case 0x1a8834u: goto label_1a8834;
        case 0x1a8838u: goto label_1a8838;
        case 0x1a883cu: goto label_1a883c;
        case 0x1a8840u: goto label_1a8840;
        case 0x1a8844u: goto label_1a8844;
        case 0x1a8848u: goto label_1a8848;
        case 0x1a884cu: goto label_1a884c;
        default: break;
    }

    ctx->pc = 0x1a87d8u;

label_1a87d8:
    // 0x1a87d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a87d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1a87dc:
    // 0x1a87dc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1a87dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1a87e0:
    // 0x1a87e0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1a87e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1a87e4:
    // 0x1a87e4: 0x2442b3f0  addiu       $v0, $v0, -0x4C10
    ctx->pc = 0x1a87e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947824));
label_1a87e8:
    // 0x1a87e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a87e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1a87ec:
    // 0x1a87ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a87ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a87f0:
    // 0x1a87f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a87f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1a87f4:
    // 0x1a87f4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1a87f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1a87f8:
    // 0x1a87f8: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x1a87f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1a87fc:
    // 0x1a87fc: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_1a8800:
    if (ctx->pc == 0x1A8800u) {
        ctx->pc = 0x1A8800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A87FCu;
        // 0x1a8800: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8804u;
        goto label_1a8804;
    }
    ctx->pc = 0x1A87FCu;
    {
        const bool branch_taken_0x1a87fc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A87FCu;
        // 0x1a8800: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a87fc) {
            ctx->pc = 0x1A881Cu;
            goto label_1a881c;
        }
    }
    ctx->pc = 0x1A8804u;
label_1a8804:
    // 0x1a8804: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1a8804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1a8808:
    // 0x1a8808: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1a8808u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1a880c:
    // 0x1a880c: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x1a880cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
label_1a8810:
    // 0x1a8810: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x1a8810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_1a8814:
    // 0x1a8814: 0x60f809  jalr        $v1
label_1a8818:
    if (ctx->pc == 0x1A8818u) {
        ctx->pc = 0x1A8818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8814u;
        // 0x1a8818: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A881Cu;
        goto label_1a881c;
    }
    ctx->pc = 0x1A8814u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A881Cu);
        ctx->pc = 0x1A8818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8814u;
        // 0x1a8818: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A8814u, 0x1A881Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A881Cu;
label_1a881c:
    // 0x1a881c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1a881cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1a8820:
    // 0x1a8820: 0x32230001  andi        $v1, $s1, 0x1
    ctx->pc = 0x1a8820u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_1a8824:
    // 0x1a8824: 0x2442b440  addiu       $v0, $v0, -0x4BC0
    ctx->pc = 0x1a8824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947904));
label_1a8828:
    // 0x1a8828: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1a882c:
    if (ctx->pc == 0x1A882Cu) {
        ctx->pc = 0x1A882Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8828u;
        // 0x1a882c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8830u;
        goto label_1a8830;
    }
    ctx->pc = 0x1A8828u;
    {
        const bool branch_taken_0x1a8828 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A882Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8828u;
        // 0x1a882c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8828) {
            ctx->pc = 0x1A8838u;
            goto label_1a8838;
        }
    }
    ctx->pc = 0x1A8830u;
label_1a8830:
    // 0x1a8830: 0xc0808b8  jal         func_2022E0
label_1a8834:
    if (ctx->pc == 0x1A8834u) {
        ctx->pc = 0x1A8834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8830u;
        // 0x1a8834: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8838u;
        goto label_1a8838;
    }
    ctx->pc = 0x1A8830u;
    SET_GPR_U32(ctx, 31, 0x1A8838u);
    ctx->pc = 0x1A8834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8830u;
    // 0x1a8834: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1A8830u, 0x1A8838u)) {
        return;
    }
    ctx->pc = 0x1A8838u;
label_1a8838:
    // 0x1a8838: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1a8838u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1a883c:
    // 0x1a883c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a883cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1a8840:
    // 0x1a8840: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a8840u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a8844:
    // 0x1a8844: 0x3e00008  jr          $ra
label_1a8848:
    if (ctx->pc == 0x1A8848u) {
        ctx->pc = 0x1A8848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8844u;
        // 0x1a8848: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A884Cu;
        goto label_1a884c;
    }
    ctx->pc = 0x1A8844u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A8848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8844u;
        // 0x1a8848: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A8844u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A884Cu;
label_1a884c:
    // 0x1a884c: 0x0  nop
    ctx->pc = 0x1a884cu;
    // NOP
    ctx->pc = 0x1a8850u;
}
