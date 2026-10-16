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

// Function: sub_00287570
// Address: 0x287570 - 0x287680
void sub_00287570_0x287570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00287570_0x287570");
#endif

    switch (ctx->pc) {
        case 0x2875d0u: goto label_2875d0;
        case 0x28764cu: goto label_28764c;
        default: break;
    }

    ctx->pc = 0x287570u;

    // 0x287570: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x287570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x287574: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x287574u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x287578: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x287578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x28757c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x28757cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x287580: 0x245063b0  addiu       $s0, $v0, 0x63B0
    ctx->pc = 0x287580u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 25520));
    // 0x287584: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x287584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x287588: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x287588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x28758c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x28758cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x287590: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x287590u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287594: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x287594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x287598: 0x8e020610  lw          $v0, 0x610($s0)
    ctx->pc = 0x287598u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7069C0u));
    // 0x28759c: 0x2853001f  slti        $s3, $v0, 0x1F
    ctx->pc = 0x28759cu;
    SET_GPR_U64(ctx, 19, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x2875a0: 0x1260002a  beqz        $s3, . + 4 + (0x2A << 2)
    ctx->pc = 0x2875A0u;
    {
        const bool branch_taken_0x2875a0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2875A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2875A0u;
        // 0x2875a4: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2875a0) {
            ctx->pc = 0x28764Cu;
            goto label_28764c;
        }
    }
    ctx->pc = 0x2875A8u;
    // 0x2875a8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2875a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2875ac: 0x26110590  addiu       $s1, $s0, 0x590
    ctx->pc = 0x2875acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1424));
    // 0x2875b0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2875b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2875b4: 0xae020610  sw          $v0, 0x610($s0)
    ctx->pc = 0x2875b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1552), GPR_U32(ctx, 2));
    // 0x2875b8: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x2875b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x2875bc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2875bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2875c0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2875C0u;
    {
        const bool branch_taken_0x2875c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2875c0) {
            ctx->pc = 0x2875E0u;
            goto label_2875e0;
        }
    }
    ctx->pc = 0x2875C8u;
    // 0x2875c8: 0xc092ff4  jal         func_24BFD0
    ctx->pc = 0x2875C8u;
    SET_GPR_U32(ctx, 31, 0x2875D0u);
    ctx->pc = 0x24BFD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24BFD0u, 0x2875C8u, 0x2875D0u)) {
        return;
    }
    ctx->pc = 0x2875D0u;
label_2875d0:
    // 0x2875d0: 0x8e030610  lw          $v1, 0x610($s0)
    ctx->pc = 0x2875d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1552)));
    // 0x2875d4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2875d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2875d8: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x2875d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x2875dc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2875dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_2875e0:
    // 0x2875e0: 0x16400011  bnez        $s2, . + 4 + (0x11 << 2)
    ctx->pc = 0x2875E0u;
    {
        const bool branch_taken_0x2875e0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x2875E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2875E0u;
        // 0x2875e4: 0x8e020610  lw          $v0, 0x610($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1552)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2875e0) {
            ctx->pc = 0x287628u;
            goto label_287628;
        }
    }
    ctx->pc = 0x2875E8u;
    // 0x2875e8: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x2875e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2875ec: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2875ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2875f0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2875f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2875f4: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x2875f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x2875f8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2875f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2875fc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2875fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x287600: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x287600u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x287604: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x287604u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x287608: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x287608u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x28760c: 0x78830010  lq          $v1, 0x10($a0)
    ctx->pc = 0x28760cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x287610: 0x7ca30010  sq          $v1, 0x10($a1)
    ctx->pc = 0x287610u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 3));
    // 0x287614: 0x78820020  lq          $v0, 0x20($a0)
    ctx->pc = 0x287614u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x287618: 0x7ca20020  sq          $v0, 0x20($a1)
    ctx->pc = 0x287618u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), GPR_VEC(ctx, 2));
    // 0x28761c: 0x78830030  lq          $v1, 0x30($a0)
    ctx->pc = 0x28761cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x287620: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x287620u;
    {
        const bool branch_taken_0x287620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287620u;
        // 0x287624: 0x7ca30030  sq          $v1, 0x30($a1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 5), 48), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287620) {
            ctx->pc = 0x28764Cu;
            goto label_28764c;
        }
    }
    ctx->pc = 0x287628u;
label_287628:
    // 0x287628: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x287628u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28762c: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x28762cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x287630: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x287630u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x287634: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x287634u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x287638: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x287638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x28763c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x28763cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x287640: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x287640u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x287644: 0xc092d9c  jal         func_24B670
    ctx->pc = 0x287644u;
    SET_GPR_U32(ctx, 31, 0x28764Cu);
    ctx->pc = 0x287648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287644u;
    // 0x287648: 0x8c660000  lw          $a2, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B670u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B670u, 0x287644u, 0x28764Cu)) {
        return;
    }
    ctx->pc = 0x28764Cu;
label_28764c:
    // 0x28764c: 0x268363b0  addiu       $v1, $s4, 0x63B0
    ctx->pc = 0x28764cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 25520));
    // 0x287650: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x287650u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287654: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x287654u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x287658: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x287658u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28765c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x28765cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x287660: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x287660u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x287664: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x287664u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x287668: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x287668u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28766c: 0xac600704  sw          $zero, 0x704($v1)
    ctx->pc = 0x28766cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1796), GPR_U32(ctx, 0));
    // 0x287670: 0xac6006f0  sw          $zero, 0x6F0($v1)
    ctx->pc = 0x287670u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1776), GPR_U32(ctx, 0));
    // 0x287674: 0x3e00008  jr          $ra
    ctx->pc = 0x287674u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x287678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287674u;
        // 0x287678: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x287674u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28767Cu;
    // 0x28767c: 0x0  nop
    ctx->pc = 0x28767cu;
    // NOP
    ctx->pc = 0x287680u;
}
