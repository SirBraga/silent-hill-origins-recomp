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

// Function: sub_00185E70
// Address: 0x185e70 - 0x186000
void sub_00185E70_0x185e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00185E70_0x185e70");
#endif

    switch (ctx->pc) {
        case 0x185eacu: goto label_185eac;
        case 0x185ec0u: goto label_185ec0;
        case 0x185ed0u: goto label_185ed0;
        case 0x185ee4u: goto label_185ee4;
        case 0x185ef4u: goto label_185ef4;
        case 0x185f08u: goto label_185f08;
        case 0x185f1cu: goto label_185f1c;
        case 0x185f30u: goto label_185f30;
        case 0x185f44u: goto label_185f44;
        case 0x185f58u: goto label_185f58;
        case 0x185f68u: goto label_185f68;
        case 0x185f78u: goto label_185f78;
        case 0x185f8cu: goto label_185f8c;
        case 0x185fa0u: goto label_185fa0;
        case 0x185fa8u: goto label_185fa8;
        case 0x185fb0u: goto label_185fb0;
        case 0x185fb8u: goto label_185fb8;
        case 0x185fc0u: goto label_185fc0;
        case 0x185fc8u: goto label_185fc8;
        case 0x185fd4u: goto label_185fd4;
        default: break;
    }

    ctx->pc = 0x185e70u;

    // 0x185e70: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x185e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x185e74: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x185e74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x185e78: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x185e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x185e7c: 0x24428700  addiu       $v0, $v0, -0x7900
    ctx->pc = 0x185e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936320));
    // 0x185e80: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x185e80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x185e84: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x185e84u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185e88: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x185e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x185e8c: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x185e8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x185e90: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x185e90u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185e94: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x185e94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x185e98: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x185e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x185e9c: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x185e9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x185ea0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x185ea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x185ea4: 0xc061a92  jal         func_186A48
    ctx->pc = 0x185EA4u;
    SET_GPR_U32(ctx, 31, 0x185EACu);
    ctx->pc = 0x185EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185EA4u;
    // 0x185ea8: 0xaea20004  sw          $v0, 0x4($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186A48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x186A48u, 0x185EA4u, 0x185EACu)) {
        return;
    }
    ctx->pc = 0x185EACu;
label_185eac:
    // 0x185eac: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x185eacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x185eb0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x185eb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185eb4: 0x24508880  addiu       $s0, $v0, -0x7780
    ctx->pc = 0x185eb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936704));
    // 0x185eb8: 0xc07fcce  jal         func_1FF338
    ctx->pc = 0x185EB8u;
    SET_GPR_U32(ctx, 31, 0x185EC0u);
    ctx->pc = 0x185EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185EB8u;
    // 0x185ebc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF338u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF338u, 0x185EB8u, 0x185EC0u)) {
        return;
    }
    ctx->pc = 0x185EC0u;
label_185ec0:
    // 0x185ec0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x185EC0u;
    {
        const bool branch_taken_0x185ec0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x185EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185EC0u;
        // 0x185ec4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185ec0) {
            ctx->pc = 0x185ED0u;
            goto label_185ed0;
        }
    }
    ctx->pc = 0x185EC8u;
    // 0x185ec8: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x185EC8u;
    SET_GPR_U32(ctx, 31, 0x185ED0u);
    ctx->pc = 0x185ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185EC8u;
    // 0x185ecc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x185EC8u, 0x185ED0u)) {
        return;
    }
    ctx->pc = 0x185ED0u;
label_185ed0:
    // 0x185ed0: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x185ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x185ed4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x185ed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185ed8: 0x24508898  addiu       $s0, $v0, -0x7768
    ctx->pc = 0x185ed8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936728));
    // 0x185edc: 0xc07fcce  jal         func_1FF338
    ctx->pc = 0x185EDCu;
    SET_GPR_U32(ctx, 31, 0x185EE4u);
    ctx->pc = 0x185EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185EDCu;
    // 0x185ee0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF338u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF338u, 0x185EDCu, 0x185EE4u)) {
        return;
    }
    ctx->pc = 0x185EE4u;
label_185ee4:
    // 0x185ee4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x185EE4u;
    {
        const bool branch_taken_0x185ee4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x185EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185EE4u;
        // 0x185ee8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185ee4) {
            ctx->pc = 0x185EF4u;
            goto label_185ef4;
        }
    }
    ctx->pc = 0x185EECu;
    // 0x185eec: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x185EECu;
    SET_GPR_U32(ctx, 31, 0x185EF4u);
    ctx->pc = 0x185EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185EECu;
    // 0x185ef0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x185EECu, 0x185EF4u)) {
        return;
    }
    ctx->pc = 0x185EF4u;
label_185ef4:
    // 0x185ef4: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x185ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x185ef8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x185ef8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185efc: 0x24508918  addiu       $s0, $v0, -0x76E8
    ctx->pc = 0x185efcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936856));
    // 0x185f00: 0xc07fcce  jal         func_1FF338
    ctx->pc = 0x185F00u;
    SET_GPR_U32(ctx, 31, 0x185F08u);
    ctx->pc = 0x185F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185F00u;
    // 0x185f04: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF338u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF338u, 0x185F00u, 0x185F08u)) {
        return;
    }
    ctx->pc = 0x185F08u;
label_185f08:
    // 0x185f08: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x185F08u;
    {
        const bool branch_taken_0x185f08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x185F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185F08u;
        // 0x185f0c: 0x3c14006d  lui         $s4, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)109 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185f08) {
            ctx->pc = 0x185F20u;
            goto label_185f20;
        }
    }
    ctx->pc = 0x185F10u;
    // 0x185f10: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x185f10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185f14: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x185F14u;
    SET_GPR_U32(ctx, 31, 0x185F1Cu);
    ctx->pc = 0x185F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185F14u;
    // 0x185f18: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x185F14u, 0x185F1Cu)) {
        return;
    }
    ctx->pc = 0x185F1Cu;
label_185f1c:
    // 0x185f1c: 0x3c14006d  lui         $s4, 0x6D
    ctx->pc = 0x185f1cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)109 << 16));
label_185f20:
    // 0x185f20: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x185f20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185f24: 0x2694bcc8  addiu       $s4, $s4, -0x4338
    ctx->pc = 0x185f24u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294950088));
    // 0x185f28: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x185F28u;
    SET_GPR_U32(ctx, 31, 0x185F30u);
    ctx->pc = 0x185F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185F28u;
    // 0x185f2c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x185F28u, 0x185F30u)) {
        return;
    }
    ctx->pc = 0x185F30u;
label_185f30:
    // 0x185f30: 0x3c13006d  lui         $s3, 0x6D
    ctx->pc = 0x185f30u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)109 << 16));
    // 0x185f34: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x185f34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185f38: 0x2673bcd0  addiu       $s3, $s3, -0x4330
    ctx->pc = 0x185f38u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294950096));
    // 0x185f3c: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x185F3Cu;
    SET_GPR_U32(ctx, 31, 0x185F44u);
    ctx->pc = 0x185F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185F3Cu;
    // 0x185f40: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x185F3Cu, 0x185F44u)) {
        return;
    }
    ctx->pc = 0x185F44u;
label_185f44:
    // 0x185f44: 0x3c12006d  lui         $s2, 0x6D
    ctx->pc = 0x185f44u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)109 << 16));
    // 0x185f48: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x185f48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185f4c: 0x2652bcd8  addiu       $s2, $s2, -0x4328
    ctx->pc = 0x185f4cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294950104));
    // 0x185f50: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x185F50u;
    SET_GPR_U32(ctx, 31, 0x185F58u);
    ctx->pc = 0x185F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185F50u;
    // 0x185f54: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x185F50u, 0x185F58u)) {
        return;
    }
    ctx->pc = 0x185F58u;
label_185f58:
    // 0x185f58: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x185f58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x185f5c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x185f5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185f60: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x185F60u;
    SET_GPR_U32(ctx, 31, 0x185F68u);
    ctx->pc = 0x185F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185F60u;
    // 0x185f64: 0x24a586b8  addiu       $a1, $a1, -0x7948 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x185F60u, 0x185F68u)) {
        return;
    }
    ctx->pc = 0x185F68u;
label_185f68:
    // 0x185f68: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x185f68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x185f6c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x185f6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185f70: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x185F70u;
    SET_GPR_U32(ctx, 31, 0x185F78u);
    ctx->pc = 0x185F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185F70u;
    // 0x185f74: 0x24a586c0  addiu       $a1, $a1, -0x7940 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x185F70u, 0x185F78u)) {
        return;
    }
    ctx->pc = 0x185F78u;
label_185f78:
    // 0x185f78: 0x3c11006d  lui         $s1, 0x6D
    ctx->pc = 0x185f78u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)109 << 16));
    // 0x185f7c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x185f7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185f80: 0x2631bcf0  addiu       $s1, $s1, -0x4310
    ctx->pc = 0x185f80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294950128));
    // 0x185f84: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x185F84u;
    SET_GPR_U32(ctx, 31, 0x185F8Cu);
    ctx->pc = 0x185F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185F84u;
    // 0x185f88: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x185F84u, 0x185F8Cu)) {
        return;
    }
    ctx->pc = 0x185F8Cu;
label_185f8c:
    // 0x185f8c: 0x3c10006d  lui         $s0, 0x6D
    ctx->pc = 0x185f8cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)109 << 16));
    // 0x185f90: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x185f90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185f94: 0x2610bcf8  addiu       $s0, $s0, -0x4308
    ctx->pc = 0x185f94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294950136));
    // 0x185f98: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x185F98u;
    SET_GPR_U32(ctx, 31, 0x185FA0u);
    ctx->pc = 0x185F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185F98u;
    // 0x185f9c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x185F98u, 0x185FA0u)) {
        return;
    }
    ctx->pc = 0x185FA0u;
label_185fa0:
    // 0x185fa0: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x185FA0u;
    SET_GPR_U32(ctx, 31, 0x185FA8u);
    ctx->pc = 0x185FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185FA0u;
    // 0x185fa4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x185FA0u, 0x185FA8u)) {
        return;
    }
    ctx->pc = 0x185FA8u;
label_185fa8:
    // 0x185fa8: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x185FA8u;
    SET_GPR_U32(ctx, 31, 0x185FB0u);
    ctx->pc = 0x185FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185FA8u;
    // 0x185fac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x185FA8u, 0x185FB0u)) {
        return;
    }
    ctx->pc = 0x185FB0u;
label_185fb0:
    // 0x185fb0: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x185FB0u;
    SET_GPR_U32(ctx, 31, 0x185FB8u);
    ctx->pc = 0x185FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185FB0u;
    // 0x185fb4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x185FB0u, 0x185FB8u)) {
        return;
    }
    ctx->pc = 0x185FB8u;
label_185fb8:
    // 0x185fb8: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x185FB8u;
    SET_GPR_U32(ctx, 31, 0x185FC0u);
    ctx->pc = 0x185FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185FB8u;
    // 0x185fbc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x185FB8u, 0x185FC0u)) {
        return;
    }
    ctx->pc = 0x185FC0u;
label_185fc0:
    // 0x185fc0: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x185FC0u;
    SET_GPR_U32(ctx, 31, 0x185FC8u);
    ctx->pc = 0x185FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185FC0u;
    // 0x185fc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x185FC0u, 0x185FC8u)) {
        return;
    }
    ctx->pc = 0x185FC8u;
label_185fc8:
    // 0x185fc8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x185fc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185fcc: 0xc07fc62  jal         func_1FF188
    ctx->pc = 0x185FCCu;
    SET_GPR_U32(ctx, 31, 0x185FD4u);
    ctx->pc = 0x185FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185FCCu;
    // 0x185fd0: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF188u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF188u, 0x185FCCu, 0x185FD4u)) {
        return;
    }
    ctx->pc = 0x185FD4u;
label_185fd4:
    // 0x185fd4: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x185fd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x185fd8: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x185fd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x185fdc: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x185fdcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x185fe0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x185fe0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x185fe4: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x185fe4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x185fe8: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x185fe8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x185fec: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x185fecu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x185ff0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x185ff0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x185ff4: 0x3e00008  jr          $ra
    ctx->pc = 0x185FF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x185FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185FF4u;
        // 0x185ff8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x185FF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x185FFCu;
    // 0x185ffc: 0x0  nop
    ctx->pc = 0x185ffcu;
    // NOP
    ctx->pc = 0x186000u;
}
