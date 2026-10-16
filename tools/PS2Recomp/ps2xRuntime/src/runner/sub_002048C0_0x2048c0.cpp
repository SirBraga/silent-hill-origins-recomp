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

// Function: sub_002048C0
// Address: 0x2048c0 - 0x204970
void sub_002048C0_0x2048c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002048C0_0x2048c0");
#endif

    switch (ctx->pc) {
        case 0x2048ecu: goto label_2048ec;
        case 0x20490cu: goto label_20490c;
        default: break;
    }

    ctx->pc = 0x2048c0u;

    // 0x2048c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2048c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2048c4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2048c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2048c8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x2048c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x2048cc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2048ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2048d0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2048d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2048d4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2048d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2048d8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2048d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2048dc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2048dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2048e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2048e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2048e4: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x2048E4u;
    SET_GPR_U32(ctx, 31, 0x2048ECu);
    ctx->pc = 0x2048E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2048E4u;
    // 0x2048e8: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x2048E4u, 0x2048ECu)) {
        return;
    }
    ctx->pc = 0x2048ECu;
label_2048ec:
    // 0x2048ec: 0x2672000c  addiu       $s2, $s3, 0xC
    ctx->pc = 0x2048ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
    // 0x2048f0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2048f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2048f4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2048f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2048f8: 0x24633c80  addiu       $v1, $v1, 0x3C80
    ctx->pc = 0x2048f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15488));
    // 0x2048fc: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x2048fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
    // 0x204900: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x204900u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x204904: 0xc080858  jal         func_202160
    ctx->pc = 0x204904u;
    SET_GPR_U32(ctx, 31, 0x20490Cu);
    ctx->pc = 0x204908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204904u;
    // 0x204908: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202160u, 0x204904u, 0x20490Cu)) {
        return;
    }
    ctx->pc = 0x20490Cu;
label_20490c:
    // 0x20490c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x20490cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204910: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x204910u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x204914: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x204914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x204918: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x204918u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x20491c: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x20491cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x204920: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x204920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x204924: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x204924u;
    {
        const bool branch_taken_0x204924 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x204924) {
            ctx->pc = 0x204928u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x204924u;
            // 0x204928: 0xac430004  sw          $v1, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20492Cu;
            goto label_20492c;
        }
    }
    ctx->pc = 0x20492Cu;
label_20492c:
    // 0x20492c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x20492cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x204930: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x204930u;
    {
        const bool branch_taken_0x204930 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x204930) {
            ctx->pc = 0x204934u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x204930u;
            // 0x204934: 0xae430004  sw          $v1, 0x4($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x204938u;
            goto label_204938;
        }
    }
    ctx->pc = 0x204938u;
label_204938:
    // 0x204938: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x204938u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
    // 0x20493c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x20493cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x204940: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x204940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x204944: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x204944u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x204948: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x204948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x20494c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x20494cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x204950: 0xae62000c  sw          $v0, 0xC($s3)
    ctx->pc = 0x204950u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
    // 0x204954: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x204954u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x204958: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x204958u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20495c: 0x3e00008  jr          $ra
    ctx->pc = 0x20495Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x204960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20495Cu;
        // 0x204960: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20495Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x204964u;
    // 0x204964: 0x0  nop
    ctx->pc = 0x204964u;
    // NOP
    // 0x204968: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x204968u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x20496c: 0x0  nop
    ctx->pc = 0x20496cu;
    // NOP
    ctx->pc = 0x204970u;
}
