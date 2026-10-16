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

// Function: sub_00249750
// Address: 0x249750 - 0x2497e0
void sub_00249750_0x249750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00249750_0x249750");
#endif

    switch (ctx->pc) {
        case 0x249750u: goto label_249750;
        case 0x249754u: goto label_249754;
        case 0x249758u: goto label_249758;
        case 0x24975cu: goto label_24975c;
        case 0x249760u: goto label_249760;
        case 0x249764u: goto label_249764;
        case 0x249768u: goto label_249768;
        case 0x24976cu: goto label_24976c;
        case 0x249770u: goto label_249770;
        case 0x249774u: goto label_249774;
        case 0x249778u: goto label_249778;
        case 0x24977cu: goto label_24977c;
        case 0x249780u: goto label_249780;
        case 0x249784u: goto label_249784;
        case 0x249788u: goto label_249788;
        case 0x24978cu: goto label_24978c;
        case 0x249790u: goto label_249790;
        case 0x249794u: goto label_249794;
        case 0x249798u: goto label_249798;
        case 0x24979cu: goto label_24979c;
        case 0x2497a0u: goto label_2497a0;
        case 0x2497a4u: goto label_2497a4;
        case 0x2497a8u: goto label_2497a8;
        case 0x2497acu: goto label_2497ac;
        case 0x2497b0u: goto label_2497b0;
        case 0x2497b4u: goto label_2497b4;
        case 0x2497b8u: goto label_2497b8;
        case 0x2497bcu: goto label_2497bc;
        case 0x2497c0u: goto label_2497c0;
        case 0x2497c4u: goto label_2497c4;
        case 0x2497c8u: goto label_2497c8;
        case 0x2497ccu: goto label_2497cc;
        case 0x2497d0u: goto label_2497d0;
        case 0x2497d4u: goto label_2497d4;
        case 0x2497d8u: goto label_2497d8;
        case 0x2497dcu: goto label_2497dc;
        default: break;
    }

    ctx->pc = 0x249750u;

label_249750:
    // 0x249750: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x249750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_249754:
    // 0x249754: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x249754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_249758:
    // 0x249758: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x249758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_24975c:
    // 0x24975c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x24975cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_249760:
    // 0x249760: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x249760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_249764:
    // 0x249764: 0x12200018  beqz        $s1, . + 4 + (0x18 << 2)
label_249768:
    if (ctx->pc == 0x249768u) {
        ctx->pc = 0x249768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249764u;
        // 0x249768: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24976Cu;
        goto label_24976c;
    }
    ctx->pc = 0x249764u;
    {
        const bool branch_taken_0x249764 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x249768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249764u;
        // 0x249768: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249764) {
            ctx->pc = 0x2497C8u;
            goto label_2497c8;
        }
    }
    ctx->pc = 0x24976Cu;
label_24976c:
    // 0x24976c: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x24976cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_249770:
    // 0x249770: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_249774:
    if (ctx->pc == 0x249774u) {
        ctx->pc = 0x249774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249770u;
        // 0x249774: 0x3c120073  lui         $s2, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249778u;
        goto label_249778;
    }
    ctx->pc = 0x249770u;
    {
        const bool branch_taken_0x249770 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x249774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249770u;
        // 0x249774: 0x3c120073  lui         $s2, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249770) {
            ctx->pc = 0x24978Cu;
            goto label_24978c;
        }
    }
    ctx->pc = 0x249778u;
label_249778:
    // 0x249778: 0x26420fc8  addiu       $v0, $s2, 0xFC8
    ctx->pc = 0x249778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4040));
label_24977c:
    // 0x24977c: 0x8c43010c  lw          $v1, 0x10C($v0)
    ctx->pc = 0x24977cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
label_249780:
    // 0x249780: 0x60f809  jalr        $v1
label_249784:
    if (ctx->pc == 0x249784u) {
        ctx->pc = 0x249788u;
        goto label_249788;
    }
    ctx->pc = 0x249780u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x249788u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x249780u, 0x249788u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x249788u;
label_249788:
    // 0x249788: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x249788u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_24978c:
    // 0x24978c: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x24978cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_249790:
    // 0x249790: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
label_249794:
    if (ctx->pc == 0x249794u) {
        ctx->pc = 0x249794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249790u;
        // 0x249794: 0x26430fc8  addiu       $v1, $s2, 0xFC8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4040));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249798u;
        goto label_249798;
    }
    ctx->pc = 0x249790u;
    {
        const bool branch_taken_0x249790 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x249794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249790u;
        // 0x249794: 0x26430fc8  addiu       $v1, $s2, 0xFC8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4040));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249790) {
            ctx->pc = 0x2497BCu;
            goto label_2497bc;
        }
    }
    ctx->pc = 0x249798u;
label_249798:
    // 0x249798: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x249798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24979c:
    // 0x24979c: 0x0  nop
    ctx->pc = 0x24979cu;
    // NOP
label_2497a0:
    // 0x2497a0: 0xc092500  jal         func_249400
label_2497a4:
    if (ctx->pc == 0x2497A4u) {
        ctx->pc = 0x2497A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2497A0u;
        // 0x2497a4: 0x8e100008  lw          $s0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2497A8u;
        goto label_2497a8;
    }
    ctx->pc = 0x2497A0u;
    SET_GPR_U32(ctx, 31, 0x2497A8u);
    ctx->pc = 0x2497A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2497A0u;
    // 0x2497a4: 0x8e100008  lw          $s0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249400u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249400u, 0x2497A0u, 0x2497A8u)) {
        return;
    }
    ctx->pc = 0x2497A8u;
label_2497a8:
    // 0x2497a8: 0x0  nop
    ctx->pc = 0x2497a8u;
    // NOP
label_2497ac:
    // 0x2497ac: 0x0  nop
    ctx->pc = 0x2497acu;
    // NOP
label_2497b0:
    // 0x2497b0: 0x1600fffb  bnez        $s0, . + 4 + (-0x5 << 2)
label_2497b4:
    if (ctx->pc == 0x2497B4u) {
        ctx->pc = 0x2497B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2497B0u;
        // 0x2497b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2497B8u;
        goto label_2497b8;
    }
    ctx->pc = 0x2497B0u;
    {
        const bool branch_taken_0x2497b0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2497B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2497B0u;
        // 0x2497b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2497b0) {
            ctx->pc = 0x2497A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2497a0;
        }
    }
    ctx->pc = 0x2497B8u;
label_2497b8:
    // 0x2497b8: 0x26430fc8  addiu       $v1, $s2, 0xFC8
    ctx->pc = 0x2497b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4040));
label_2497bc:
    // 0x2497bc: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x2497bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_2497c0:
    // 0x2497c0: 0x40f809  jalr        $v0
label_2497c4:
    if (ctx->pc == 0x2497C4u) {
        ctx->pc = 0x2497C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2497C0u;
        // 0x2497c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2497C8u;
        goto label_2497c8;
    }
    ctx->pc = 0x2497C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2497C8u);
        ctx->pc = 0x2497C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2497C0u;
        // 0x2497c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2497C0u, 0x2497C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2497C8u;
label_2497c8:
    // 0x2497c8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2497c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2497cc:
    // 0x2497cc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2497ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2497d0:
    // 0x2497d0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2497d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2497d4:
    // 0x2497d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2497d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2497d8:
    // 0x2497d8: 0x3e00008  jr          $ra
label_2497dc:
    if (ctx->pc == 0x2497DCu) {
        ctx->pc = 0x2497DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2497D8u;
        // 0x2497dc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2497E0u;
        goto label_fallthrough_0x2497d8;
    }
    ctx->pc = 0x2497D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2497DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2497D8u;
        // 0x2497dc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2497D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2497d8:
    ctx->pc = 0x2497E0u;
}
