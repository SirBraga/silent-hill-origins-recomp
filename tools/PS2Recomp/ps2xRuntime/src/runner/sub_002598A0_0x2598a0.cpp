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

// Function: sub_002598A0
// Address: 0x2598a0 - 0x259a38
void sub_002598A0_0x2598a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002598A0_0x2598a0");
#endif

    switch (ctx->pc) {
        case 0x259928u: goto label_259928;
        default: break;
    }

    ctx->pc = 0x2598a0u;

    // 0x2598a0: 0x28c60004  slti        $a2, $a2, 0x4
    ctx->pc = 0x2598a0u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2598a4: 0x50c00004  beql        $a2, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2598A4u;
    {
        const bool branch_taken_0x2598a4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2598a4) {
            ctx->pc = 0x2598A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2598A4u;
            // 0x2598a8: 0x90820020  lbu         $v0, 0x20($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2598B8u;
            goto label_2598b8;
        }
    }
    ctx->pc = 0x2598ACu;
    // 0x2598ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2598acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2598b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2598B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2598B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2598B0u;
        // 0x2598b4: 0xac82001c  sw          $v0, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2598B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2598B8u;
label_2598b8:
    // 0x2598b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2598b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2598bc: 0xac830018  sw          $v1, 0x18($a0)
    ctx->pc = 0x2598bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
    // 0x2598c0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2598c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2598c4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2598c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2598c8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2598c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2598cc: 0x1464000a  bne         $v1, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x2598CCu;
    {
        const bool branch_taken_0x2598cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2598D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2598CCu;
        // 0x2598d0: 0x8c830010  lw          $v1, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2598cc) {
            ctx->pc = 0x2598F8u;
            goto label_2598f8;
        }
    }
    ctx->pc = 0x2598D4u;
    // 0x2598d4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2598d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2598d8: 0x90820020  lbu         $v0, 0x20($a0)
    ctx->pc = 0x2598d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x2598dc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2598dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2598e0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2598e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2598e4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2598e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2598e8: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2598E8u;
    {
        const bool branch_taken_0x2598e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2598e8) {
            ctx->pc = 0x2598ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2598E8u;
            // 0x2598ec: 0xac400014  sw          $zero, 0x14($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25991Cu;
            goto label_25991c;
        }
    }
    ctx->pc = 0x2598F0u;
    // 0x2598f0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2598F0u;
    {
        const bool branch_taken_0x2598f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2598F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2598F0u;
        // 0x2598f4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2598f0) {
            ctx->pc = 0x259920u;
            goto label_259920;
        }
    }
    ctx->pc = 0x2598F8u;
label_2598f8:
    // 0x2598f8: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2598F8u;
    {
        const bool branch_taken_0x2598f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2598f8) {
            ctx->pc = 0x2598FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2598F8u;
            // 0x2598fc: 0x8c830014  lw          $v1, 0x14($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25990Cu;
            goto label_25990c;
        }
    }
    ctx->pc = 0x259900u;
    // 0x259900: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x259900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x259904: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x259904u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
    // 0x259908: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x259908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_25990c:
    // 0x25990c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x25990Cu;
    {
        const bool branch_taken_0x25990c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x259910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25990Cu;
        // 0x259910: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25990c) {
            ctx->pc = 0x259920u;
            goto label_259920;
        }
    }
    ctx->pc = 0x259914u;
    // 0x259914: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x259914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x259918: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x259918u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
label_25991c:
    // 0x25991c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x25991cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_259920:
    // 0x259920: 0x24890004  addiu       $t1, $a0, 0x4
    ctx->pc = 0x259920u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x259924: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x259924u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_259928:
    // 0x259928: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x259928u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25992c: 0x1231821  addu        $v1, $t1, $v1
    ctx->pc = 0x25992cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x259930: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x259930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x259934: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x259934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x259938: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x259938u;
    {
        const bool branch_taken_0x259938 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25993Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259938u;
        // 0x25993c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259938) {
            ctx->pc = 0x25995Cu;
            goto label_25995c;
        }
    }
    ctx->pc = 0x259940u;
    // 0x259940: 0x10640007  beq         $v1, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x259940u;
    {
        const bool branch_taken_0x259940 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x259944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259940u;
        // 0x259944: 0x1271021  addu        $v0, $t1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259940) {
            ctx->pc = 0x259960u;
            goto label_259960;
        }
    }
    ctx->pc = 0x259948u;
    // 0x259948: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x259948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x25994c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25994Cu;
    {
        const bool branch_taken_0x25994c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x259950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25994Cu;
        // 0x259950: 0x1271021  addu        $v0, $t1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25994c) {
            ctx->pc = 0x259960u;
            goto label_259960;
        }
    }
    ctx->pc = 0x259954u;
    // 0x259954: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x259954u;
    {
        const bool branch_taken_0x259954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x259958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259954u;
        // 0x259958: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259954) {
            ctx->pc = 0x259978u;
            goto label_259978;
        }
    }
    ctx->pc = 0x25995Cu;
label_25995c:
    // 0x25995c: 0x1271021  addu        $v0, $t1, $a3
    ctx->pc = 0x25995cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
label_259960:
    // 0x259960: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x259960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x259964: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x259964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x259968: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x259968u;
    {
        const bool branch_taken_0x259968 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x259968) {
            ctx->pc = 0x259978u;
            goto label_259978;
        }
    }
    ctx->pc = 0x259970u;
    // 0x259970: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x259970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x259974: 0x62300a  movz        $a2, $v1, $v0
    ctx->pc = 0x259974u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3));
label_259978:
    // 0x259978: 0x10c00029  beqz        $a2, . + 4 + (0x29 << 2)
    ctx->pc = 0x259978u;
    {
        const bool branch_taken_0x259978 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x25997Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259978u;
        // 0x25997c: 0x25020001  addiu       $v0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259978) {
            ctx->pc = 0x259A20u;
            goto label_259a20;
        }
    }
    ctx->pc = 0x259980u;
    // 0x259980: 0x90c20020  lbu         $v0, 0x20($a2)
    ctx->pc = 0x259980u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x259984: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x259984u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x259988: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x259988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x25998c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x25998cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x259990: 0x1466000a  bne         $v1, $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x259990u;
    {
        const bool branch_taken_0x259990 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x259994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259990u;
        // 0x259994: 0x8cc30010  lw          $v1, 0x10($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259990) {
            ctx->pc = 0x2599BCu;
            goto label_2599bc;
        }
    }
    ctx->pc = 0x259998u;
    // 0x259998: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x259998u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x25999c: 0x90c20020  lbu         $v0, 0x20($a2)
    ctx->pc = 0x25999cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x2599a0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2599a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2599a4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2599a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2599a8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2599a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2599ac: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2599ACu;
    {
        const bool branch_taken_0x2599ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2599ac) {
            ctx->pc = 0x2599B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2599ACu;
            // 0x2599b0: 0xac400014  sw          $zero, 0x14($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2599E0u;
            goto label_2599e0;
        }
    }
    ctx->pc = 0x2599B4u;
    // 0x2599b4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2599B4u;
    {
        const bool branch_taken_0x2599b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2599B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2599B4u;
        // 0x2599b8: 0x90c20020  lbu         $v0, 0x20($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2599b4) {
            ctx->pc = 0x2599E4u;
            goto label_2599e4;
        }
    }
    ctx->pc = 0x2599BCu;
label_2599bc:
    // 0x2599bc: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2599BCu;
    {
        const bool branch_taken_0x2599bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2599bc) {
            ctx->pc = 0x2599C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2599BCu;
            // 0x2599c0: 0x8cc30014  lw          $v1, 0x14($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2599D0u;
            goto label_2599d0;
        }
    }
    ctx->pc = 0x2599C4u;
    // 0x2599c4: 0x8cc20014  lw          $v0, 0x14($a2)
    ctx->pc = 0x2599c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x2599c8: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x2599c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
    // 0x2599cc: 0x8cc30014  lw          $v1, 0x14($a2)
    ctx->pc = 0x2599ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
label_2599d0:
    // 0x2599d0: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2599D0u;
    {
        const bool branch_taken_0x2599d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2599d0) {
            ctx->pc = 0x2599D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2599D0u;
            // 0x2599d4: 0x90c20020  lbu         $v0, 0x20($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2599E4u;
            goto label_2599e4;
        }
    }
    ctx->pc = 0x2599D8u;
    // 0x2599d8: 0x8cc20010  lw          $v0, 0x10($a2)
    ctx->pc = 0x2599d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x2599dc: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x2599dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
label_2599e0:
    // 0x2599e0: 0x90c20020  lbu         $v0, 0x20($a2)
    ctx->pc = 0x2599e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 32)));
label_2599e4:
    // 0x2599e4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2599e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2599e8: 0xa0c20020  sb          $v0, 0x20($a2)
    ctx->pc = 0x2599e8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 32), (uint8_t)GPR_U32(ctx, 2));
    // 0x2599ec: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2599ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2599f0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2599f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2599f4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2599f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2599f8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2599f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2599fc: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2599FCu;
    {
        const bool branch_taken_0x2599fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x259A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2599FCu;
        // 0x259a00: 0xacc30010  sw          $v1, 0x10($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2599fc) {
            ctx->pc = 0x259A08u;
            goto label_259a08;
        }
    }
    ctx->pc = 0x259A04u;
    // 0x259a04: 0xac660014  sw          $a2, 0x14($v1)
    ctx->pc = 0x259a04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 6));
label_259a08:
    // 0x259a08: 0x90c20020  lbu         $v0, 0x20($a2)
    ctx->pc = 0x259a08u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x259a0c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x259a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x259a10: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x259a10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x259a14: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x259a14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x259a18: 0xacc00014  sw          $zero, 0x14($a2)
    ctx->pc = 0x259a18u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 0));
    // 0x259a1c: 0x25020001  addiu       $v0, $t0, 0x1
    ctx->pc = 0x259a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_259a20:
    // 0x259a20: 0x304800ff  andi        $t0, $v0, 0xFF
    ctx->pc = 0x259a20u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x259a24: 0x2d030003  sltiu       $v1, $t0, 0x3
    ctx->pc = 0x259a24u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x259a28: 0x1460ffbf  bnez        $v1, . + 4 + (-0x41 << 2)
    ctx->pc = 0x259A28u;
    {
        const bool branch_taken_0x259a28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x259A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259A28u;
        // 0x259a2c: 0x81880  sll         $v1, $t0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259a28) {
            ctx->pc = 0x259928u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_259928;
        }
    }
    ctx->pc = 0x259A30u;
    // 0x259a30: 0x3e00008  jr          $ra
    ctx->pc = 0x259A30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x259A30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x259A38u;
}
