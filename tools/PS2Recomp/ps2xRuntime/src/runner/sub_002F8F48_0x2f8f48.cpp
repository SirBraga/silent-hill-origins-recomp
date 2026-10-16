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

// Function: sub_002F8F48
// Address: 0x2f8f48 - 0x2f9010
void sub_002F8F48_0x2f8f48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F8F48_0x2f8f48");
#endif

    switch (ctx->pc) {
        case 0x2f8f60u: goto label_2f8f60;
        case 0x2f8fc8u: goto label_2f8fc8;
        default: break;
    }

    ctx->pc = 0x2f8f48u;

    // 0x2f8f48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2f8f48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2f8f4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f8f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f8f50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2f8f50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2f8f54: 0xac820828  sw          $v0, 0x828($a0)
    ctx->pc = 0x2f8f54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2088), GPR_U32(ctx, 2));
    // 0x2f8f58: 0xc0c9ba4  jal         func_326E90
    ctx->pc = 0x2F8F58u;
    SET_GPR_U32(ctx, 31, 0x2F8F60u);
    ctx->pc = 0x2F8F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8F58u;
    // 0x2f8f5c: 0xac8001c0  sw          $zero, 0x1C0($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 448), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326E90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x326E90u, 0x2F8F58u, 0x2F8F60u)) {
        return;
    }
    ctx->pc = 0x2F8F60u;
label_2f8f60:
    // 0x2f8f60: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x2f8f60u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x2f8f64: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x2f8f64u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x2f8f68: 0x34c6f520  ori         $a2, $a2, 0xF520
    ctx->pc = 0x2f8f68u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)62752);
    // 0x2f8f6c: 0x3c080001  lui         $t0, 0x1
    ctx->pc = 0x2f8f6cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)1 << 16));
    // 0x2f8f70: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2f8f70u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000F520u)); // MMIO: 0x1000f520
    // 0x2f8f74: 0x34e7f590  ori         $a3, $a3, 0xF590
    ctx->pc = 0x2f8f74u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)62864);
    // 0x2f8f78: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x2f8f78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x2f8f7c: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x2f8f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x2f8f80: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x2f8f80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x2f8f84: 0x3484b000  ori         $a0, $a0, 0xB000
    ctx->pc = 0x2f8f84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)45056);
    // 0x2f8f88: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x2f8f88u;
    runtime->Store32(rdram, ctx, 0x1000F590u, GPR_U32(ctx, 3)); // MMIO: 0x1000f590
    // 0x2f8f8c: 0x34a5b400  ori         $a1, $a1, 0xB400
    ctx->pc = 0x2f8f8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)46080);
    // 0x2f8f90: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2f8f90u;
    runtime->Store32(rdram, ctx, 0x1000B000u, GPR_U32(ctx, 0)); // MMIO: 0x1000b000
    // 0x2f8f94: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x2f8f94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x2f8f98: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2f8f98u;
    runtime->Store32(rdram, ctx, 0x1000B400u, GPR_U32(ctx, 0)); // MMIO: 0x1000b400
    // 0x2f8f9c: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x2f8f9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x2f8fa0: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x2f8fa0u;
    runtime->Store32(rdram, ctx, 0x1000D400u, GPR_U32(ctx, 0)); // MMIO: 0x1000d400
    // 0x2f8fa4: 0x3c04fffe  lui         $a0, 0xFFFE
    ctx->pc = 0x2f8fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65534 << 16));
    // 0x2f8fa8: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x2f8fa8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x2f8fac: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2f8facu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000F520u)); // MMIO: 0x1000f520
    // 0x2f8fb0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2f8fb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2f8fb4: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x2f8fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x2f8fb8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F8FB8u;
    {
        const bool branch_taken_0x2f8fb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8FB8u;
        // 0x2f8fbc: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8fb8) {
            ctx->pc = 0x2F8FCCu;
            goto label_2f8fcc;
        }
    }
    ctx->pc = 0x2F8FC0u;
    // 0x2f8fc0: 0xc0c9bb8  jal         func_326EE0
    ctx->pc = 0x2F8FC0u;
    SET_GPR_U32(ctx, 31, 0x2F8FC8u);
    ctx->pc = 0x326EE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x326EE0u, 0x2F8FC0u, 0x2F8FC8u)) {
        return;
    }
    ctx->pc = 0x2F8FC8u;
label_2f8fc8:
    // 0x2f8fc8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x2f8fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_2f8fcc:
    // 0x2f8fcc: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x2f8fccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x2f8fd0: 0x3442b020  ori         $v0, $v0, 0xB020
    ctx->pc = 0x2f8fd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45088);
    // 0x2f8fd4: 0x3484b420  ori         $a0, $a0, 0xB420
    ctx->pc = 0x2f8fd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46112);
    // 0x2f8fd8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2f8fd8u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0)); // MMIO: 0x1000b020
    // 0x2f8fdc: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x2f8fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x2f8fe0: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2f8fe0u;
    runtime->Store32(rdram, ctx, 0x1000B420u, GPR_U32(ctx, 0)); // MMIO: 0x1000b420
    // 0x2f8fe4: 0x3463d420  ori         $v1, $v1, 0xD420
    ctx->pc = 0x2f8fe4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54304);
    // 0x2f8fe8: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x2f8fe8u;
    runtime->Store32(rdram, ctx, 0x1000D420u, GPR_U32(ctx, 0)); // MMIO: 0x1000d420
    // 0x2f8fec: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x2f8fecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x2f8ff0: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x2f8ff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x2f8ff4: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x2f8ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x2f8ff8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f8ff8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f8ffc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f8ffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9000: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2f9000u;
    runtime->Store32(rdram, ctx, 0x10002010u, GPR_U32(ctx, 3)); // MMIO: 0x10002010
    // 0x2f9004: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f9004u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9008: 0x80c0bc0  j           func_302F00
    ctx->pc = 0x2F9008u;
    ctx->pc = 0x2F900Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9008u;
    // 0x2f900c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302F00u, 0x2F9008u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2F9010u;
}
