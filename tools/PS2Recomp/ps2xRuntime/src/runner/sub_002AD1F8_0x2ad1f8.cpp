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

// Function: sub_002AD1F8
// Address: 0x2ad1f8 - 0x2ad2e0
void sub_002AD1F8_0x2ad1f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AD1F8_0x2ad1f8");
#endif

    switch (ctx->pc) {
        case 0x2ad254u: goto label_2ad254;
        case 0x2ad268u: goto label_2ad268;
        default: break;
    }

    ctx->pc = 0x2ad1f8u;

    // 0x2ad1f8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2ad1f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2ad1fc: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2ad1fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2ad200: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2ad200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2ad204: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2ad204u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad208: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2ad208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2ad20c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ad20cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad210: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x2ad210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x2ad214: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ad214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ad218: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2ad218u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ad21c: 0x96040020  lhu         $a0, 0x20($s0)
    ctx->pc = 0x2ad21cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2ad220: 0x8e250068  lw          $a1, 0x68($s1)
    ctx->pc = 0x2ad220u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
    // 0x2ad224: 0x41942  srl         $v1, $a0, 5
    ctx->pc = 0x2ad224u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 5));
    // 0x2ad228: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2ad228u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2ad22c: 0x3084001f  andi        $a0, $a0, 0x1F
    ctx->pc = 0x2ad22cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    // 0x2ad230: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2ad230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2ad234: 0x932004  sllv        $a0, $s3, $a0
    ctx->pc = 0x2ad234u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), GPR_U32(ctx, 4) & 0x1F));
    // 0x2ad238: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2ad238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ad23c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2ad23cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2ad240: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AD240u;
    {
        const bool branch_taken_0x2ad240 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD240u;
        // 0x2ad244: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad240) {
            ctx->pc = 0x2AD254u;
            goto label_2ad254;
        }
    }
    ctx->pc = 0x2AD248u;
    // 0x2ad248: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2ad248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2ad24c: 0xc0adcce  jal         func_2B7338
    ctx->pc = 0x2AD24Cu;
    SET_GPR_U32(ctx, 31, 0x2AD254u);
    ctx->pc = 0x2AD250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD24Cu;
    // 0x2ad250: 0x96050020  lhu         $a1, 0x20($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7338u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B7338u, 0x2AD24Cu, 0x2AD254u)) {
        return;
    }
    ctx->pc = 0x2AD254u;
label_2ad254:
    // 0x2ad254: 0x1240000f  beqz        $s2, . + 4 + (0xF << 2)
    ctx->pc = 0x2AD254u;
    {
        const bool branch_taken_0x2ad254 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD254u;
        // 0x2ad258: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad254) {
            ctx->pc = 0x2AD294u;
            goto label_2ad294;
        }
    }
    ctx->pc = 0x2AD25Cu;
    // 0x2ad25c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2ad25cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2ad260: 0xc0adc58  jal         func_2B7160
    ctx->pc = 0x2AD260u;
    SET_GPR_U32(ctx, 31, 0x2AD268u);
    ctx->pc = 0x2AD264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD260u;
    // 0x2ad264: 0x96050020  lhu         $a1, 0x20($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B7160u, 0x2AD260u, 0x2AD268u)) {
        return;
    }
    ctx->pc = 0x2AD268u;
label_2ad268:
    // 0x2ad268: 0x96040020  lhu         $a0, 0x20($s0)
    ctx->pc = 0x2ad268u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2ad26c: 0x8e250068  lw          $a1, 0x68($s1)
    ctx->pc = 0x2ad26cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
    // 0x2ad270: 0x41942  srl         $v1, $a0, 5
    ctx->pc = 0x2ad270u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 5));
    // 0x2ad274: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2ad274u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2ad278: 0x3084001f  andi        $a0, $a0, 0x1F
    ctx->pc = 0x2ad278u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    // 0x2ad27c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2ad27cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2ad280: 0x932004  sllv        $a0, $s3, $a0
    ctx->pc = 0x2ad280u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), GPR_U32(ctx, 4) & 0x1F));
    // 0x2ad284: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2ad284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ad288: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2ad288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2ad28c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2AD28Cu;
    {
        const bool branch_taken_0x2ad28c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD28Cu;
        // 0x2ad290: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad28c) {
            ctx->pc = 0x2AD2C0u;
            goto label_2ad2c0;
        }
    }
    ctx->pc = 0x2AD294u;
label_2ad294:
    // 0x2ad294: 0x96030020  lhu         $v1, 0x20($s0)
    ctx->pc = 0x2ad294u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2ad298: 0x8e220068  lw          $v0, 0x68($s1)
    ctx->pc = 0x2ad298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
    // 0x2ad29c: 0x32142  srl         $a0, $v1, 5
    ctx->pc = 0x2ad29cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x2ad2a0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2ad2a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ad2a4: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x2ad2a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x2ad2a8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2ad2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2ad2ac: 0x731804  sllv        $v1, $s3, $v1
    ctx->pc = 0x2ad2acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), GPR_U32(ctx, 3) & 0x1F));
    // 0x2ad2b0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2ad2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ad2b4: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x2ad2b4u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2ad2b8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2ad2b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2ad2bc: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2ad2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_2ad2c0:
    // 0x2ad2c0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2ad2c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad2c4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2ad2c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ad2c8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2ad2c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ad2cc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2ad2ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ad2d0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x2ad2d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ad2d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ad2d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ad2d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2AD2D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AD2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD2D8u;
        // 0x2ad2dc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AD2D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AD2E0u;
}
