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

// Function: sub_003208E8
// Address: 0x3208e8 - 0x3209b0
void sub_003208E8_0x3208e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003208E8_0x3208e8");
#endif

    ctx->pc = 0x3208e8u;

    // 0x3208e8: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x3208e8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x3208ec: 0x3c027ff0  lui         $v0, 0x7FF0
    ctx->pc = 0x3208ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32752 << 16));
    // 0x3208f0: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x3208f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x3208f4: 0x3c03fcc0  lui         $v1, 0xFCC0
    ctx->pc = 0x3208f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64704 << 16));
    // 0x3208f8: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x3208f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3208fc: 0x1880000a  blez        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x3208FCu;
    {
        const bool branch_taken_0x3208fc = (GPR_S64(ctx, 4) <= 0);
        ctx->pc = 0x320900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3208FCu;
        // 0x320900: 0x41023  negu        $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3208fc) {
            ctx->pc = 0x320928u;
            goto label_320928;
        }
    }
    ctx->pc = 0x320904u;
    // 0x320904: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x320904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x320908: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x320908u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x32090c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x32090cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x320910: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x320910u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x320914: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x320914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x320918: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x320918u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x32091c: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x32091cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x320920: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x320920u;
    {
        const bool branch_taken_0x320920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x320924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320920u;
        // 0x320924: 0xa32824  and         $a1, $a1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320920) {
            ctx->pc = 0x3209A8u;
            goto label_3209a8;
        }
    }
    ctx->pc = 0x320928u;
label_320928:
    // 0x320928: 0x22503  sra         $a0, $v0, 20
    ctx->pc = 0x320928u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 20));
    // 0x32092c: 0x28830014  slti        $v1, $a0, 0x14
    ctx->pc = 0x32092cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x320930: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x320930u;
    {
        const bool branch_taken_0x320930 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x320934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320930u;
        // 0x320934: 0x3c020008  lui         $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320930) {
            ctx->pc = 0x320960u;
            goto label_320960;
        }
    }
    ctx->pc = 0x320938u;
    // 0x320938: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x320938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x32093c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x32093cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x320940: 0x821007  srav        $v0, $v0, $a0
    ctx->pc = 0x320940u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x320944: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x320944u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x320948: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x320948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x32094c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x32094cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x320950: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x320950u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x320954: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x320954u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x320958: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x320958u;
    {
        const bool branch_taken_0x320958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32095Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320958u;
        // 0x32095c: 0xa32824  and         $a1, $a1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320958) {
            ctx->pc = 0x3209A8u;
            goto label_3209a8;
        }
    }
    ctx->pc = 0x320960u;
label_320960:
    // 0x320960: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x320960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x320964: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x320964u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x320968: 0x2484ffec  addiu       $a0, $a0, -0x14
    ctx->pc = 0x320968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
    // 0x32096c: 0x2882001f  slti        $v0, $a0, 0x1F
    ctx->pc = 0x32096cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x320970: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x320970u;
    {
        const bool branch_taken_0x320970 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x320974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320970u;
        // 0x320974: 0xa32824  and         $a1, $a1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320970) {
            ctx->pc = 0x32098Cu;
            goto label_32098c;
        }
    }
    ctx->pc = 0x320978u;
    // 0x320978: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x320978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x32097c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32097cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x320980: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x320980u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x320984: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x320984u;
    {
        const bool branch_taken_0x320984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x320988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320984u;
        // 0x320988: 0x431004  sllv        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320984) {
            ctx->pc = 0x320990u;
            goto label_320990;
        }
    }
    ctx->pc = 0x32098Cu;
label_32098c:
    // 0x32098c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32098cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_320990:
    // 0x320990: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x320990u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x320994: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x320994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x320998: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x320998u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x32099c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x32099cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x3209a0: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x3209a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x3209a4: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x3209a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_3209a8:
    // 0x3209a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3209A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3209ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3209A8u;
        // 0x3209ac: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3209A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3209B0u;
}
