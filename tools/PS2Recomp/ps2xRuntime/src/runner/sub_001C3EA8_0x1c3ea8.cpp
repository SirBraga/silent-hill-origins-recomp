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

// Function: sub_001C3EA8
// Address: 0x1c3ea8 - 0x1c4058
void sub_001C3EA8_0x1c3ea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C3EA8_0x1c3ea8");
#endif

    switch (ctx->pc) {
        case 0x1c3eecu: goto label_1c3eec;
        case 0x1c3f38u: goto label_1c3f38;
        case 0x1c3f50u: goto label_1c3f50;
        case 0x1c3f68u: goto label_1c3f68;
        case 0x1c3f74u: goto label_1c3f74;
        case 0x1c3f9cu: goto label_1c3f9c;
        case 0x1c3fb0u: goto label_1c3fb0;
        case 0x1c3fc4u: goto label_1c3fc4;
        case 0x1c3fd8u: goto label_1c3fd8;
        case 0x1c3fe8u: goto label_1c3fe8;
        case 0x1c3ff8u: goto label_1c3ff8;
        case 0x1c400cu: goto label_1c400c;
        case 0x1c4020u: goto label_1c4020;
        default: break;
    }

    ctx->pc = 0x1c3ea8u;

    // 0x1c3ea8: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x1c3ea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x1c3eac: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x1c3eacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
    // 0x1c3eb0: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x1c3eb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
    // 0x1c3eb4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c3eb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3eb8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1c3eb8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3ebc: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x1c3ebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
    // 0x1c3ec0: 0x7fb500b0  sq          $s5, 0xB0($sp)
    ctx->pc = 0x1c3ec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 21));
    // 0x1c3ec4: 0x7fb600a0  sq          $s6, 0xA0($sp)
    ctx->pc = 0x1c3ec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 22));
    // 0x1c3ec8: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x1c3ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
    // 0x1c3ecc: 0x3c16006a  lui         $s6, 0x6A
    ctx->pc = 0x1c3eccu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)106 << 16));
    // 0x1c3ed0: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x1c3ed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
    // 0x1c3ed4: 0x3c14006a  lui         $s4, 0x6A
    ctx->pc = 0x1c3ed4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)106 << 16));
    // 0x1c3ed8: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x1c3ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
    // 0x1c3edc: 0x3c15006a  lui         $s5, 0x6A
    ctx->pc = 0x1c3edcu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)106 << 16));
    // 0x1c3ee0: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1c3ee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1c3ee4: 0xc06d512  jal         func_1B5448
    ctx->pc = 0x1C3EE4u;
    SET_GPR_U32(ctx, 31, 0x1C3EECu);
    ctx->pc = 0x1C3EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3EE4u;
    // 0x1c3ee8: 0x3c17006a  lui         $s7, 0x6A (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)106 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5448u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B5448u, 0x1C3EE4u, 0x1C3EECu)) {
        return;
    }
    ctx->pc = 0x1C3EECu;
label_1c3eec:
    // 0x1c3eec: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1c3eecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1c3ef0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1c3ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c3ef4: 0x2442e460  addiu       $v0, $v0, -0x1BA0
    ctx->pc = 0x1c3ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960224));
    // 0x1c3ef8: 0xae0002d0  sw          $zero, 0x2D0($s0)
    ctx->pc = 0x1c3ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 720), GPR_U32(ctx, 0));
    // 0x1c3efc: 0xae0002d4  sw          $zero, 0x2D4($s0)
    ctx->pc = 0x1c3efcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 724), GPR_U32(ctx, 0));
    // 0x1c3f00: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c3f00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3f04: 0xae0002d8  sw          $zero, 0x2D8($s0)
    ctx->pc = 0x1c3f04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 728), GPR_U32(ctx, 0));
    // 0x1c3f08: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c3f08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3f0c: 0xae0002dc  sw          $zero, 0x2DC($s0)
    ctx->pc = 0x1c3f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 732), GPR_U32(ctx, 0));
    // 0x1c3f10: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x1c3f10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1c3f14: 0xae0002e0  sw          $zero, 0x2E0($s0)
    ctx->pc = 0x1c3f14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 736), GPR_U32(ctx, 0));
    // 0x1c3f18: 0xae0002e4  sw          $zero, 0x2E4($s0)
    ctx->pc = 0x1c3f18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 740), GPR_U32(ctx, 0));
    // 0x1c3f1c: 0xae0002ec  sw          $zero, 0x2EC($s0)
    ctx->pc = 0x1c3f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 748), GPR_U32(ctx, 0));
    // 0x1c3f20: 0xae0002f0  sw          $zero, 0x2F0($s0)
    ctx->pc = 0x1c3f20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 752), GPR_U32(ctx, 0));
    // 0x1c3f24: 0xae0002f4  sw          $zero, 0x2F4($s0)
    ctx->pc = 0x1c3f24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 756), GPR_U32(ctx, 0));
    // 0x1c3f28: 0xae0002f8  sw          $zero, 0x2F8($s0)
    ctx->pc = 0x1c3f28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 760), GPR_U32(ctx, 0));
    // 0x1c3f2c: 0xae0302e8  sw          $v1, 0x2E8($s0)
    ctx->pc = 0x1c3f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 744), GPR_U32(ctx, 3));
    // 0x1c3f30: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1C3F30u;
    SET_GPR_U32(ctx, 31, 0x1C3F38u);
    ctx->pc = 0x1C3F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3F30u;
    // 0x1c3f34: 0xae020258  sw          $v0, 0x258($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 600), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1C3F30u, 0x1C3F38u)) {
        return;
    }
    ctx->pc = 0x1C3F38u;
label_1c3f38:
    // 0x1c3f38: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1c3f38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1c3f3c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c3f3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3f40: 0x24a5e400  addiu       $a1, $a1, -0x1C00
    ctx->pc = 0x1c3f40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960128));
    // 0x1c3f44: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1c3f44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3f48: 0xc065f2c  jal         func_197CB0
    ctx->pc = 0x1C3F48u;
    SET_GPR_U32(ctx, 31, 0x1C3F50u);
    ctx->pc = 0x1C3F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3F48u;
    // 0x1c3f4c: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197CB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197CB0u, 0x1C3F48u, 0x1C3F50u)) {
        return;
    }
    ctx->pc = 0x1C3F50u;
label_1c3f50:
    // 0x1c3f50: 0x83a30000  lb          $v1, 0x0($sp)
    ctx->pc = 0x1c3f50u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c3f54: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1C3F54u;
    {
        const bool branch_taken_0x1c3f54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3F54u;
        // 0x1c3f58: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3f54) {
            ctx->pc = 0x1C3F8Cu;
            goto label_1c3f8c;
        }
    }
    ctx->pc = 0x1C3F5Cu;
    // 0x1c3f5c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1c3f5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3f60: 0x24529830  addiu       $s2, $v0, -0x67D0
    ctx->pc = 0x1c3f60u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940720));
    // 0x1c3f64: 0x0  nop
    ctx->pc = 0x1c3f64u;
    // NOP
label_1c3f68:
    // 0x1c3f68: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1c3f68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1c3f6c: 0xc0c4a1f  jal         func_31287C
    ctx->pc = 0x1C3F6Cu;
    SET_GPR_U32(ctx, 31, 0x1C3F74u);
    ctx->pc = 0x1C3F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3F6Cu;
    // 0x1c3f70: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31287Cu;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31287Cu, 0x1C3F6Cu, 0x1C3F74u)) {
        return;
    }
    ctx->pc = 0x1C3F74u;
label_1c3f74:
    // 0x1c3f74: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1C3F74u;
    {
        const bool branch_taken_0x1c3f74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3f74) {
            ctx->pc = 0x1C3F78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C3F74u;
            // 0x1c3f78: 0xae1102e8  sw          $s1, 0x2E8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 744), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C3F7Cu;
            goto label_1c3f7c;
        }
    }
    ctx->pc = 0x1C3F7Cu;
label_1c3f7c:
    // 0x1c3f7c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1c3f7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1c3f80: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x1c3f80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1c3f84: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1C3F84u;
    {
        const bool branch_taken_0x1c3f84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C3F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3F84u;
        // 0x1c3f88: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3f84) {
            ctx->pc = 0x1C3F68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c3f68;
        }
    }
    ctx->pc = 0x1C3F8Cu;
label_1c3f8c:
    // 0x1c3f8c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c3f8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3f90: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c3f90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3f94: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1C3F94u;
    SET_GPR_U32(ctx, 31, 0x1C3F9Cu);
    ctx->pc = 0x1C3F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3F94u;
    // 0x1c3f98: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1C3F94u, 0x1C3F9Cu)) {
        return;
    }
    ctx->pc = 0x1C3F9Cu;
label_1c3f9c:
    // 0x1c3f9c: 0x26c5e410  addiu       $a1, $s6, -0x1BF0
    ctx->pc = 0x1c3f9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4294960144));
    // 0x1c3fa0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c3fa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3fa4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1c3fa4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3fa8: 0xc065f2c  jal         func_197CB0
    ctx->pc = 0x1C3FA8u;
    SET_GPR_U32(ctx, 31, 0x1C3FB0u);
    ctx->pc = 0x1C3FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3FA8u;
    // 0x1c3fac: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197CB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197CB0u, 0x1C3FA8u, 0x1C3FB0u)) {
        return;
    }
    ctx->pc = 0x1C3FB0u;
label_1c3fb0:
    // 0x1c3fb0: 0x83a30000  lb          $v1, 0x0($sp)
    ctx->pc = 0x1c3fb0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c3fb4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C3FB4u;
    {
        const bool branch_taken_0x1c3fb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3FB4u;
        // 0x1c3fb8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3fb4) {
            ctx->pc = 0x1C3FC8u;
            goto label_1c3fc8;
        }
    }
    ctx->pc = 0x1C3FBCu;
    // 0x1c3fbc: 0xc065c40  jal         func_197100
    ctx->pc = 0x1C3FBCu;
    SET_GPR_U32(ctx, 31, 0x1C3FC4u);
    ctx->pc = 0x1C3FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3FBCu;
    // 0x1c3fc0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197100u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197100u, 0x1C3FBCu, 0x1C3FC4u)) {
        return;
    }
    ctx->pc = 0x1C3FC4u;
label_1c3fc4:
    // 0x1c3fc4: 0xae0202e0  sw          $v0, 0x2E0($s0)
    ctx->pc = 0x1c3fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 736), GPR_U32(ctx, 2));
label_1c3fc8:
    // 0x1c3fc8: 0x2685e420  addiu       $a1, $s4, -0x1BE0
    ctx->pc = 0x1c3fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4294960160));
    // 0x1c3fcc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c3fccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3fd0: 0xc065ee8  jal         func_197BA0
    ctx->pc = 0x1C3FD0u;
    SET_GPR_U32(ctx, 31, 0x1C3FD8u);
    ctx->pc = 0x1C3FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3FD0u;
    // 0x1c3fd4: 0x260602ec  addiu       $a2, $s0, 0x2EC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 748));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197BA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197BA0u, 0x1C3FD0u, 0x1C3FD8u)) {
        return;
    }
    ctx->pc = 0x1C3FD8u;
label_1c3fd8:
    // 0x1c3fd8: 0x26a5e430  addiu       $a1, $s5, -0x1BD0
    ctx->pc = 0x1c3fd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294960176));
    // 0x1c3fdc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c3fdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3fe0: 0xc065ee8  jal         func_197BA0
    ctx->pc = 0x1C3FE0u;
    SET_GPR_U32(ctx, 31, 0x1C3FE8u);
    ctx->pc = 0x1C3FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3FE0u;
    // 0x1c3fe4: 0x260602f0  addiu       $a2, $s0, 0x2F0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197BA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197BA0u, 0x1C3FE0u, 0x1C3FE8u)) {
        return;
    }
    ctx->pc = 0x1C3FE8u;
label_1c3fe8:
    // 0x1c3fe8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c3fe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3fec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c3fecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3ff0: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1C3FF0u;
    SET_GPR_U32(ctx, 31, 0x1C3FF8u);
    ctx->pc = 0x1C3FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3FF0u;
    // 0x1c3ff4: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1C3FF0u, 0x1C3FF8u)) {
        return;
    }
    ctx->pc = 0x1C3FF8u;
label_1c3ff8:
    // 0x1c3ff8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c3ff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3ffc: 0x26e5e440  addiu       $a1, $s7, -0x1BC0
    ctx->pc = 0x1c3ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 4294960192));
    // 0x1c4000: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1c4000u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4004: 0xc065f2c  jal         func_197CB0
    ctx->pc = 0x1C4004u;
    SET_GPR_U32(ctx, 31, 0x1C400Cu);
    ctx->pc = 0x1C4008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4004u;
    // 0x1c4008: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197CB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197CB0u, 0x1C4004u, 0x1C400Cu)) {
        return;
    }
    ctx->pc = 0x1C400Cu;
label_1c400c:
    // 0x1c400c: 0x83a30000  lb          $v1, 0x0($sp)
    ctx->pc = 0x1c400cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c4010: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C4010u;
    {
        const bool branch_taken_0x1c4010 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4010u;
        // 0x1c4014: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4010) {
            ctx->pc = 0x1C4024u;
            goto label_1c4024;
        }
    }
    ctx->pc = 0x1C4018u;
    // 0x1c4018: 0xc065c40  jal         func_197100
    ctx->pc = 0x1C4018u;
    SET_GPR_U32(ctx, 31, 0x1C4020u);
    ctx->pc = 0x1C401Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4018u;
    // 0x1c401c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197100u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197100u, 0x1C4018u, 0x1C4020u)) {
        return;
    }
    ctx->pc = 0x1C4020u;
label_1c4020:
    // 0x1c4020: 0xae0202f4  sw          $v0, 0x2F4($s0)
    ctx->pc = 0x1c4020u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 756), GPR_U32(ctx, 2));
label_1c4024:
    // 0x1c4024: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1c4024u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4028: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x1c4028u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1c402c: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x1c402cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1c4030: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x1c4030u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1c4034: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x1c4034u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1c4038: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x1c4038u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1c403c: 0x7bb500b0  lq          $s5, 0xB0($sp)
    ctx->pc = 0x1c403cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1c4040: 0x7bb600a0  lq          $s6, 0xA0($sp)
    ctx->pc = 0x1c4040u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1c4044: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x1c4044u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c4048: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1c4048u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1c404c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C404Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C4050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C404Cu;
        // 0x1c4050: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C404Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C4054u;
    // 0x1c4054: 0x0  nop
    ctx->pc = 0x1c4054u;
    // NOP
    ctx->pc = 0x1c4058u;
}
