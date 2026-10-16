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

// Function: sub_0014B938
// Address: 0x14b938 - 0x14ba28
void sub_0014B938_0x14b938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014B938_0x14b938");
#endif

    switch (ctx->pc) {
        case 0x14b964u: goto label_14b964;
        case 0x14b96cu: goto label_14b96c;
        case 0x14b974u: goto label_14b974;
        case 0x14b980u: goto label_14b980;
        case 0x14b9b8u: goto label_14b9b8;
        case 0x14b9c8u: goto label_14b9c8;
        case 0x14b9d8u: goto label_14b9d8;
        case 0x14b9ecu: goto label_14b9ec;
        case 0x14ba04u: goto label_14ba04;
        case 0x14ba0cu: goto label_14ba0c;
        default: break;
    }

    ctx->pc = 0x14b938u;

    // 0x14b938: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14b938u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14b93c: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x14b93cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x14b940: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x14b940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x14b944: 0x24631e48  addiu       $v1, $v1, 0x1E48
    ctx->pc = 0x14b944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7752));
    // 0x14b948: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14b948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14b94c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14b94cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b950: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14b950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14b954: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x14b954u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x14b958: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x14b958u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x14b95c: 0xc053342  jal         func_14CD08
    ctx->pc = 0x14B95Cu;
    SET_GPR_U32(ctx, 31, 0x14B964u);
    ctx->pc = 0x14B960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B95Cu;
    // 0x14b960: 0x26040008  addiu       $a0, $s0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14CD08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x14CD08u, 0x14B95Cu, 0x14B964u)) {
        return;
    }
    ctx->pc = 0x14B964u;
label_14b964:
    // 0x14b964: 0xc053342  jal         func_14CD08
    ctx->pc = 0x14B964u;
    SET_GPR_U32(ctx, 31, 0x14B96Cu);
    ctx->pc = 0x14B968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B964u;
    // 0x14b968: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14CD08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x14CD08u, 0x14B964u, 0x14B96Cu)) {
        return;
    }
    ctx->pc = 0x14B96Cu;
label_14b96c:
    // 0x14b96c: 0xc053342  jal         func_14CD08
    ctx->pc = 0x14B96Cu;
    SET_GPR_U32(ctx, 31, 0x14B974u);
    ctx->pc = 0x14B970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B96Cu;
    // 0x14b970: 0x26040038  addiu       $a0, $s0, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14CD08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x14CD08u, 0x14B96Cu, 0x14B974u)) {
        return;
    }
    ctx->pc = 0x14B974u;
label_14b974:
    // 0x14b974: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x14b974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x14b978: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x14b978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x14b97c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x14b97cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_14b980:
    // 0x14b980: 0x0  nop
    ctx->pc = 0x14b980u;
    // NOP
    // 0x14b984: 0x0  nop
    ctx->pc = 0x14b984u;
    // NOP
    // 0x14b988: 0x0  nop
    ctx->pc = 0x14b988u;
    // NOP
    // 0x14b98c: 0x0  nop
    ctx->pc = 0x14b98cu;
    // NOP
    // 0x14b990: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x14B990u;
    {
        const bool branch_taken_0x14b990 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x14B994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B990u;
        // 0x14b994: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b990) {
            ctx->pc = 0x14B980u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14b980;
        }
    }
    ctx->pc = 0x14B998u;
    // 0x14b998: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x14b998u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x14b99c: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x14b99cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x14b9a0: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x14b9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
    // 0x14b9a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14b9a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b9a8: 0xae000150  sw          $zero, 0x150($s0)
    ctx->pc = 0x14b9a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 336), GPR_U32(ctx, 0));
    // 0x14b9ac: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x14b9acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x14b9b0: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x14B9B0u;
    SET_GPR_U32(ctx, 31, 0x14B9B8u);
    ctx->pc = 0x14B9B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B9B0u;
    // 0x14b9b4: 0xae000154  sw          $zero, 0x154($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x14B9B0u, 0x14B9B8u)) {
        return;
    }
    ctx->pc = 0x14B9B8u;
label_14b9b8:
    // 0x14b9b8: 0x260400e0  addiu       $a0, $s0, 0xE0
    ctx->pc = 0x14b9b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x14b9bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14b9bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b9c0: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x14B9C0u;
    SET_GPR_U32(ctx, 31, 0x14B9C8u);
    ctx->pc = 0x14B9C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B9C0u;
    // 0x14b9c4: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x14B9C0u, 0x14B9C8u)) {
        return;
    }
    ctx->pc = 0x14B9C8u;
label_14b9c8:
    // 0x14b9c8: 0x26040100  addiu       $a0, $s0, 0x100
    ctx->pc = 0x14b9c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    // 0x14b9cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14b9ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b9d0: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x14B9D0u;
    SET_GPR_U32(ctx, 31, 0x14B9D8u);
    ctx->pc = 0x14B9D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B9D0u;
    // 0x14b9d4: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x14B9D0u, 0x14B9D8u)) {
        return;
    }
    ctx->pc = 0x14B9D8u;
label_14b9d8:
    // 0x14b9d8: 0xae000158  sw          $zero, 0x158($s0)
    ctx->pc = 0x14b9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 344), GPR_U32(ctx, 0));
    // 0x14b9dc: 0x2604015c  addiu       $a0, $s0, 0x15C
    ctx->pc = 0x14b9dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 348));
    // 0x14b9e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14b9e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b9e4: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x14B9E4u;
    SET_GPR_U32(ctx, 31, 0x14B9ECu);
    ctx->pc = 0x14B9E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B9E4u;
    // 0x14b9e8: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x14B9E4u, 0x14B9ECu)) {
        return;
    }
    ctx->pc = 0x14B9ECu;
label_14b9ec:
    // 0x14b9ec: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x14b9ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x14b9f0: 0x34078000  ori         $a3, $zero, 0x8000
    ctx->pc = 0x14b9f0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x14b9f4: 0x24a58908  addiu       $a1, $a1, -0x76F8
    ctx->pc = 0x14b9f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936840));
    // 0x14b9f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14b9f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b9fc: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x14B9FCu;
    SET_GPR_U32(ctx, 31, 0x14BA04u);
    ctx->pc = 0x14BA00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B9FCu;
    // 0x14ba00: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x14B9FCu, 0x14BA04u)) {
        return;
    }
    ctx->pc = 0x14BA04u;
label_14ba04:
    // 0x14ba04: 0xc095e0c  jal         func_257830
    ctx->pc = 0x14BA04u;
    SET_GPR_U32(ctx, 31, 0x14BA0Cu);
    ctx->pc = 0x14BA08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BA04u;
    // 0x14ba08: 0x24040080  addiu       $a0, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257830u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x257830u, 0x14BA04u, 0x14BA0Cu)) {
        return;
    }
    ctx->pc = 0x14BA0Cu;
label_14ba0c:
    // 0x14ba0c: 0xae020120  sw          $v0, 0x120($s0)
    ctx->pc = 0x14ba0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 2));
    // 0x14ba10: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x14ba10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ba14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14ba14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14ba18: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x14ba18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14ba1c: 0x3e00008  jr          $ra
    ctx->pc = 0x14BA1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14BA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BA1Cu;
        // 0x14ba20: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14BA1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14BA24u;
    // 0x14ba24: 0x0  nop
    ctx->pc = 0x14ba24u;
    // NOP
    ctx->pc = 0x14ba28u;
}
