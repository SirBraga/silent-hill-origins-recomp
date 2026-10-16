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

// Function: sub_0010D908
// Address: 0x10d908 - 0x10db38
void sub_0010D908_0x10d908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010D908_0x10d908");
#endif

    switch (ctx->pc) {
        case 0x10d95cu: goto label_10d95c;
        case 0x10d98cu: goto label_10d98c;
        case 0x10d9a0u: goto label_10d9a0;
        case 0x10d9b4u: goto label_10d9b4;
        case 0x10d9c4u: goto label_10d9c4;
        case 0x10d9dcu: goto label_10d9dc;
        case 0x10d9e4u: goto label_10d9e4;
        case 0x10d9f8u: goto label_10d9f8;
        case 0x10da14u: goto label_10da14;
        case 0x10daa4u: goto label_10daa4;
        default: break;
    }

    ctx->pc = 0x10d908u;

    // 0x10d908: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x10d908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x10d90c: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x10d90cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
    // 0x10d910: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x10d910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
    // 0x10d914: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x10d914u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d918: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x10d918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
    // 0x10d91c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10d91cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d920: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x10d920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
    // 0x10d924: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x10d924u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d928: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x10d928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
    // 0x10d92c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x10d92cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d930: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x10d930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x10d934: 0x12400039  beqz        $s2, . + 4 + (0x39 << 2)
    ctx->pc = 0x10D934u;
    {
        const bool branch_taken_0x10d934 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D934u;
        // 0x10d938: 0xc0a02d  daddu       $s4, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d934) {
            ctx->pc = 0x10DA1Cu;
            goto label_10da1c;
        }
    }
    ctx->pc = 0x10D93Cu;
    // 0x10d93c: 0x82420000  lb          $v0, 0x0($s2)
    ctx->pc = 0x10d93cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x10d940: 0x10400054  beqz        $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x10D940u;
    {
        const bool branch_taken_0x10d940 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D940u;
        // 0x10d944: 0x262412d0  addiu       $a0, $s1, 0x12D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4816));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d940) {
            ctx->pc = 0x10DA94u;
            goto label_10da94;
        }
    }
    ctx->pc = 0x10D948u;
    // 0x10d948: 0x822212d0  lb          $v0, 0x12D0($s1)
    ctx->pc = 0x10d948u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 4816)));
    // 0x10d94c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10D94Cu;
    {
        const bool branch_taken_0x10d94c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D94Cu;
        // 0x10d950: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d94c) {
            ctx->pc = 0x10D960u;
            goto label_10d960;
        }
    }
    ctx->pc = 0x10D954u;
    // 0x10d954: 0xc0c5c96  jal         func_317258
    ctx->pc = 0x10D954u;
    SET_GPR_U32(ctx, 31, 0x10D95Cu);
    ctx->pc = 0x317258u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x317258u, 0x10D954u, 0x10D95Cu)) {
        return;
    }
    ctx->pc = 0x10D95Cu;
label_10d95c:
    // 0x10d95c: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x10d95cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_10d960:
    // 0x10d960: 0x1460004c  bnez        $v1, . + 4 + (0x4C << 2)
    ctx->pc = 0x10D960u;
    {
        const bool branch_taken_0x10d960 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x10d960) {
            ctx->pc = 0x10DA94u;
            goto label_10da94;
        }
    }
    ctx->pc = 0x10D968u;
    // 0x10d968: 0x1260004a  beqz        $s3, . + 4 + (0x4A << 2)
    ctx->pc = 0x10D968u;
    {
        const bool branch_taken_0x10d968 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D968u;
        // 0x10d96c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d968) {
            ctx->pc = 0x10DA94u;
            goto label_10da94;
        }
    }
    ctx->pc = 0x10D970u;
    // 0x10d970: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x10d970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x10d974: 0x37a40001  ori         $a0, $sp, 0x1
    ctx->pc = 0x10d974u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)1);
    // 0x10d978: 0x9050a128  lbu         $s0, -0x5ED8($v0)
    ctx->pc = 0x10d978u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)FAST_READ8(0x68A128u));
    // 0x10d97c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x10d97cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d980: 0x2406007f  addiu       $a2, $zero, 0x7F
    ctx->pc = 0x10d980u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x10d984: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x10D984u;
    SET_GPR_U32(ctx, 31, 0x10D98Cu);
    ctx->pc = 0x10D988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D984u;
    // 0x10d988: 0xa3b00000  sb          $s0, 0x0($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x10D984u, 0x10D98Cu)) {
        return;
    }
    ctx->pc = 0x10D98Cu;
label_10d98c:
    // 0x10d98c: 0xa3b00080  sb          $s0, 0x80($sp)
    ctx->pc = 0x10d98cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 128), (uint8_t)GPR_U32(ctx, 16));
    // 0x10d990: 0x27a40081  addiu       $a0, $sp, 0x81
    ctx->pc = 0x10d990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 129));
    // 0x10d994: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x10d994u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d998: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x10D998u;
    SET_GPR_U32(ctx, 31, 0x10D9A0u);
    ctx->pc = 0x10D99Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D998u;
    // 0x10d99c: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x10D998u, 0x10D9A0u)) {
        return;
    }
    ctx->pc = 0x10D9A0u;
label_10d9a0:
    // 0x10d9a0: 0x82460000  lb          $a2, 0x0($s2)
    ctx->pc = 0x10d9a0u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x10d9a4: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x10d9a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x10d9a8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x10d9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x10d9ac: 0xc0c4fc4  jal         func_313F10
    ctx->pc = 0x10D9ACu;
    SET_GPR_U32(ctx, 31, 0x10D9B4u);
    ctx->pc = 0x10D9B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D9ACu;
    // 0x10d9b0: 0x24a5a130  addiu       $a1, $a1, -0x5ED0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313F10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x313F10u, 0x10D9ACu, 0x10D9B4u)) {
        return;
    }
    ctx->pc = 0x10D9B4u;
label_10d9b4:
    // 0x10d9b4: 0x3c100069  lui         $s0, 0x69
    ctx->pc = 0x10d9b4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)105 << 16));
    // 0x10d9b8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x10d9b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10d9bc: 0xc08175a  jal         func_205D68
    ctx->pc = 0x10D9BCu;
    SET_GPR_U32(ctx, 31, 0x10D9C4u);
    ctx->pc = 0x10D9C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D9BCu;
    // 0x10d9c0: 0x2610a138  addiu       $s0, $s0, -0x5EC8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294943032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205D68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x205D68u, 0x10D9BCu, 0x10D9C4u)) {
        return;
    }
    ctx->pc = 0x10D9C4u;
label_10d9c4:
    // 0x10d9c4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10d9c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d9c8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x10d9c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d9cc: 0x27a70080  addiu       $a3, $sp, 0x80
    ctx->pc = 0x10d9ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x10d9d0: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x10d9d0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d9d4: 0xc0c4fc4  jal         func_313F10
    ctx->pc = 0x10D9D4u;
    SET_GPR_U32(ctx, 31, 0x10D9DCu);
    ctx->pc = 0x10D9D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D9D4u;
    // 0x10d9d8: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313F10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x313F10u, 0x10D9D4u, 0x10D9DCu)) {
        return;
    }
    ctx->pc = 0x10D9DCu;
label_10d9dc:
    // 0x10d9dc: 0xc0c5d6c  jal         func_3175B0
    ctx->pc = 0x10D9DCu;
    SET_GPR_U32(ctx, 31, 0x10D9E4u);
    ctx->pc = 0x10D9E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D9DCu;
    // 0x10d9e0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3175B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3175B0u, 0x10D9DCu, 0x10D9E4u)) {
        return;
    }
    ctx->pc = 0x10D9E4u;
label_10d9e4:
    // 0x10d9e4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x10d9e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d9e8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x10d9e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d9ec: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x10d9ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10d9f0: 0xc081782  jal         func_205E08
    ctx->pc = 0x10D9F0u;
    SET_GPR_U32(ctx, 31, 0x10D9F8u);
    ctx->pc = 0x10D9F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D9F0u;
    // 0x10d9f4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x205E08u, 0x10D9F0u, 0x10D9F8u)) {
        return;
    }
    ctx->pc = 0x10D9F8u;
label_10d9f8:
    // 0x10d9f8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10d9f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d9fc: 0x16000027  bnez        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x10D9FCu;
    {
        const bool branch_taken_0x10d9fc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x10DA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D9FCu;
        // 0x10da00: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d9fc) {
            ctx->pc = 0x10DA9Cu;
            goto label_10da9c;
        }
    }
    ctx->pc = 0x10DA04u;
    // 0x10da04: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x10da04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x10da08: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x10da08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10da0c: 0xc041e86  jal         func_107A18
    ctx->pc = 0x10DA0Cu;
    SET_GPR_U32(ctx, 31, 0x10DA14u);
    ctx->pc = 0x10DA10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DA0Cu;
    // 0x10da10: 0x2484a158  addiu       $a0, $a0, -0x5EA8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107A18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x107A18u, 0x10DA0Cu, 0x10DA14u)) {
        return;
    }
    ctx->pc = 0x10DA14u;
label_10da14:
    // 0x10da14: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x10DA14u;
    {
        const bool branch_taken_0x10da14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10da14) {
            ctx->pc = 0x10DA94u;
            goto label_10da94;
        }
    }
    ctx->pc = 0x10DA1Cu;
label_10da1c:
    // 0x10da1c: 0x26231358  addiu       $v1, $s1, 0x1358
    ctx->pc = 0x10da1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4952));
    // 0x10da20: 0xa2201358  sb          $zero, 0x1358($s1)
    ctx->pc = 0x10da20u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4952), (uint8_t)GPR_U32(ctx, 0));
    // 0x10da24: 0xac600084  sw          $zero, 0x84($v1)
    ctx->pc = 0x10da24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 132), GPR_U32(ctx, 0));
    // 0x10da28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10da28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10da2c: 0xac600080  sw          $zero, 0x80($v1)
    ctx->pc = 0x10da2cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 0));
    // 0x10da30: 0xae2213d8  sw          $v0, 0x13D8($s1)
    ctx->pc = 0x10da30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5080), GPR_U32(ctx, 2));
    // 0x10da34: 0x12800016  beqz        $s4, . + 4 + (0x16 << 2)
    ctx->pc = 0x10DA34u;
    {
        const bool branch_taken_0x10da34 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DA34u;
        // 0x10da38: 0xae221350  sw          $v0, 0x1350($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4944), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10da34) {
            ctx->pc = 0x10DA90u;
            goto label_10da90;
        }
    }
    ctx->pc = 0x10DA3Cu;
    // 0x10da3c: 0xc62113e0  lwc1        $f1, 0x13E0($s1)
    ctx->pc = 0x10da3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5088)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x10da40: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x10da40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10da44: 0x0  nop
    ctx->pc = 0x10da44u;
    // NOP
    // 0x10da48: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x10da48u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10da4c: 0x0  nop
    ctx->pc = 0x10da4cu;
    // NOP
    // 0x10da50: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x10DA50u;
    {
        const bool branch_taken_0x10da50 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x10DA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DA50u;
        // 0x10da54: 0x27a30090  addiu       $v1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10da50) {
            ctx->pc = 0x10DA80u;
            goto label_10da80;
        }
    }
    ctx->pc = 0x10DA58u;
    // 0x10da58: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10da58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x10da5c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10da5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10da60: 0x262213e0  addiu       $v0, $s1, 0x13E0
    ctx->pc = 0x10da60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 5088));
    // 0x10da64: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x10da64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10da68: 0x0  nop
    ctx->pc = 0x10da68u;
    // NOP
    // 0x10da6c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x10DA6Cu;
    {
        const bool branch_taken_0x10da6c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x10DA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DA6Cu;
        // 0x10da70: 0xe7a00090  swc1        $f0, 0x90($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x10da6c) {
            ctx->pc = 0x10DA78u;
            goto label_10da78;
        }
    }
    ctx->pc = 0x10DA74u;
    // 0x10da74: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x10da74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_10da78:
    // 0x10da78: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x10DA78u;
    {
        const bool branch_taken_0x10da78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DA78u;
        // 0x10da7c: 0xc4400000  lwc1        $f0, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x10da78) {
            ctx->pc = 0x10DA88u;
            goto label_10da88;
        }
    }
    ctx->pc = 0x10DA80u;
label_10da80:
    // 0x10da80: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10da80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x10da84: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10da84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_10da88:
    // 0x10da88: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x10DA88u;
    {
        const bool branch_taken_0x10da88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DA88u;
        // 0x10da8c: 0xe62013e0  swc1        $f0, 0x13E0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5088), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x10da88) {
            ctx->pc = 0x10DA94u;
            goto label_10da94;
        }
    }
    ctx->pc = 0x10DA90u;
label_10da90:
    // 0x10da90: 0xae2013e0  sw          $zero, 0x13E0($s1)
    ctx->pc = 0x10da90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5088), GPR_U32(ctx, 0));
label_10da94:
    // 0x10da94: 0x1200001f  beqz        $s0, . + 4 + (0x1F << 2)
    ctx->pc = 0x10DA94u;
    {
        const bool branch_taken_0x10da94 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DA94u;
        // 0x10da98: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10da94) {
            ctx->pc = 0x10DB14u;
            goto label_10db14;
        }
    }
    ctx->pc = 0x10DA9Cu;
label_10da9c:
    // 0x10da9c: 0xc0c4a72  jal         func_3129C8
    ctx->pc = 0x10DA9Cu;
    SET_GPR_U32(ctx, 31, 0x10DAA4u);
    ctx->pc = 0x10DAA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DA9Cu;
    // 0x10daa0: 0x26241358  addiu       $a0, $s1, 0x1358 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3129C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3129C8u, 0x10DA9Cu, 0x10DAA4u)) {
        return;
    }
    ctx->pc = 0x10DAA4u;
label_10daa4:
    // 0x10daa4: 0x3a630001  xori        $v1, $s3, 0x1
    ctx->pc = 0x10daa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)1);
    // 0x10daa8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10daa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10daac: 0xae2313dc  sw          $v1, 0x13DC($s1)
    ctx->pc = 0x10daacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5084), GPR_U32(ctx, 3));
    // 0x10dab0: 0xae221350  sw          $v0, 0x1350($s1)
    ctx->pc = 0x10dab0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4944), GPR_U32(ctx, 2));
    // 0x10dab4: 0x12800016  beqz        $s4, . + 4 + (0x16 << 2)
    ctx->pc = 0x10DAB4u;
    {
        const bool branch_taken_0x10dab4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DAB4u;
        // 0x10dab8: 0xae2013d8  sw          $zero, 0x13D8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5080), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10dab4) {
            ctx->pc = 0x10DB10u;
            goto label_10db10;
        }
    }
    ctx->pc = 0x10DABCu;
    // 0x10dabc: 0xc62113e0  lwc1        $f1, 0x13E0($s1)
    ctx->pc = 0x10dabcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5088)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x10dac0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x10dac0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10dac4: 0x0  nop
    ctx->pc = 0x10dac4u;
    // NOP
    // 0x10dac8: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x10dac8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10dacc: 0x0  nop
    ctx->pc = 0x10daccu;
    // NOP
    // 0x10dad0: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x10DAD0u;
    {
        const bool branch_taken_0x10dad0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x10DAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DAD0u;
        // 0x10dad4: 0x27a30094  addiu       $v1, $sp, 0x94 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10dad0) {
            ctx->pc = 0x10DB00u;
            goto label_10db00;
        }
    }
    ctx->pc = 0x10DAD8u;
    // 0x10dad8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10dad8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x10dadc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10dadcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10dae0: 0x262213e0  addiu       $v0, $s1, 0x13E0
    ctx->pc = 0x10dae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 5088));
    // 0x10dae4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x10dae4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10dae8: 0x0  nop
    ctx->pc = 0x10dae8u;
    // NOP
    // 0x10daec: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x10DAECu;
    {
        const bool branch_taken_0x10daec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x10DAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DAECu;
        // 0x10daf0: 0xe7a00094  swc1        $f0, 0x94($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x10daec) {
            ctx->pc = 0x10DAF8u;
            goto label_10daf8;
        }
    }
    ctx->pc = 0x10DAF4u;
    // 0x10daf4: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x10daf4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_10daf8:
    // 0x10daf8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x10DAF8u;
    {
        const bool branch_taken_0x10daf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DAF8u;
        // 0x10dafc: 0xc4400000  lwc1        $f0, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x10daf8) {
            ctx->pc = 0x10DB08u;
            goto label_10db08;
        }
    }
    ctx->pc = 0x10DB00u;
label_10db00:
    // 0x10db00: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10db00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x10db04: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10db04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_10db08:
    // 0x10db08: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x10DB08u;
    {
        const bool branch_taken_0x10db08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DB08u;
        // 0x10db0c: 0xe62013e0  swc1        $f0, 0x13E0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5088), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x10db08) {
            ctx->pc = 0x10DB14u;
            goto label_10db14;
        }
    }
    ctx->pc = 0x10DB10u;
label_10db10:
    // 0x10db10: 0xae2013e0  sw          $zero, 0x13E0($s1)
    ctx->pc = 0x10db10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5088), GPR_U32(ctx, 0));
label_10db14:
    // 0x10db14: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x10db14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10db18: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x10db18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x10db1c: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x10db1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x10db20: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x10db20u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x10db24: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x10db24u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x10db28: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x10db28u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x10db2c: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x10db2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x10db30: 0x3e00008  jr          $ra
    ctx->pc = 0x10DB30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10DB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DB30u;
        // 0x10db34: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10DB30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10DB38u;
}
